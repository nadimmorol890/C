#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
    char s[10001];
    scanf("%s",s);

    int cntC = 0;
    int cntS = 0;
    int cntD = 0;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            cntC++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            cntS++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            cntD++;
        }
    }
    printf("%d %d %d\n",cntC,cntS,cntD);
    }
    return 0;
}