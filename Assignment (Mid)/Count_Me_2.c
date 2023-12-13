#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    scanf("%s",&s);

    int cntC = 0;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            cntC++;
        }
    }
    printf("%d\n",cntC);
    return 0;
}