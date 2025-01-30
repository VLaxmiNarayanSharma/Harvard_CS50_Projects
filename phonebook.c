#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];
    people[0].name="Carter";
    people[0].number="8934898449";

    people[1].name="narayan";
    people[1].number="7382581290";

    string name=get_string("Name: ");
    for(int i=0;i<2;i++)
    {
        if(strcmp(people[i].name,name)==0)
        {
            printf("Found %s\n",people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
