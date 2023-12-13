#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='z')
    {
        c='a';
        printf("%c\n",c);
    }
    else
    {
        printf("%c\n",c+1);
    }
    return 0;
}