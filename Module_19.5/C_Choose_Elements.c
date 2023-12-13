
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                long long int tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
        }
    }
    long long int sum = 0;
    // if(n<k)
    // {
    //     k = n;    
    // }
    for (int i=0;i<k;i++)
    {
        if(sum<sum+ar[i])
        {
            sum = sum + ar[i];
        }
        else 
        {
            break;
        }
    }
    printf("%lld",sum);
    return 0;
}