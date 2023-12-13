#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X>='0' && X<='9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(X>='a' && X<='z')
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    return 0;
}