#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s %s",&s,&t);
    
    int lengths = strlen(s);
    int lengtht = strlen(t);
    
    printf("%d %d\n",lengths,lengtht);
    printf("%s %s\n",s,t);
    
    return 0;
}