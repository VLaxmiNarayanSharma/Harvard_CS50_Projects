#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(void)
{
    string s=get_string("What's s: ");
    string t=get_string("what's t: ");
    printf("%p\n",s);
    printf("%p\n",t);
}
