#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = 0,k = (2*n-1);
    while(n--)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
    
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s++;
        k = k-2;
        printf("\n");
    }
    return 0;
}