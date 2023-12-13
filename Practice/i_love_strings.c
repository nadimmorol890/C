#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char s[60],t[60];
        scanf("%s %s",&s,&t);
        int a = strlen(s), b = strlen(t);
        int max = a;
        if(b>a)
        {
            max = b;
        }
        for(int i=0;i<max;i++)
        {
            if(i<a)
            {
                printf("%c",s[i]);
            }
            if(i<b)
            {
                printf("%c",t[i]);
            }
        }
        printf("\n");
    }
    return 0;
}