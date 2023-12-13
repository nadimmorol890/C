#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char ar[100];
        // scanf("%s",&ar);
        //gets(ar);
        fgets(ar, 100, stdin);
        printf("%s",ar);
    }
    return 0;
}