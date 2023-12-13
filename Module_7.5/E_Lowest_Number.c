#include<stdio.h>
#include<limits.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ar[n];
    
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    int mn=INT_MAX,pos;
    for(long long int i=0;i<n;i++)
    {
        if(ar[i]<mn)
        {
            mn=ar[i];
            pos=i+1;
        }
    }
    printf("%d %d\n",mn,pos);
    return 0;
}