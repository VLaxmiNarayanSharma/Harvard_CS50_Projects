#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i=get_negative_int();
    printf("%i\n",i);
}

int get_negative_int(void)
{
    int n;
    do
    {
        n=get_int("Negative numbe: ");
    }
    while(n<0);
    return n;
}
