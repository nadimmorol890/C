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
        if(ar[i]<=10)
        {
            printf("A[%lld] = %lld\n",i,ar[i]);
        }
    }
    return 0;
}