#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k = n;
    while(n--)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        k--;
        printf("\n");
    }
    return 0;
}