#include<stdio.h>
long long int sum(int ar[],int n)
{
    if(n <= 0) return 0;
    return ar[n-1] + sum(ar,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    long long int ans = sum(ar,n);
    printf("%lld\n",ans);
    return 0;
}