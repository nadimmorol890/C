#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)       
    {
        char s[100005];
        scanf("%s",s);
        int cnt = 0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' || s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')
            {
                cnt = 1;
            }
        }
        if(cnt > 0)
        printf("Good\n");
        else
        printf("Bad\n");

    }

    return 0;
}