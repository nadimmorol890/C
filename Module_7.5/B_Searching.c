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
    long long int x;
    scanf("%lld",&x);
    long long int ans=-1;
    for(long long int i=0;i<n;i++)
    {
        if(ar[i]==x)
        {
            ans=i;
            break;
        }
    }
    
    printf("%lld\n",ans);
    return 0;
}