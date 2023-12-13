#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min = ar[i];
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(min == ar[i])
        {
            cnt++;
        }
    }
    if(cnt%2 == 1)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }
    return 0;
}