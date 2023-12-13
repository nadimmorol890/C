#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ar[n];
    
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }

    for(long long int i=0;i<n;i++)
    {
    if(ar[i]>0)
    {
        ar[i]=1;
    }
    else if(ar[i]<0)
    {
        ar[i]=2;
    }
    }
    for(long long int i=0;i<n;i++)
    {
    printf("%lld ",ar[i]);
    }
    return 0;
}