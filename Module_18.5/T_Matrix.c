#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int sum1 = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1 = sum1 + ar[i][j];
            }
        }
    }
    int sum2 = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j) == (n-1))
            {
                sum2 = sum2 + ar[i][j];
            }
        }
    }
    
    int absolute_difference = abs(sum1 - sum2);
    printf("%d",absolute_difference);
    return 0;
}