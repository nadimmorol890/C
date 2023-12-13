#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        
        long long int d = m/(a*b*c);
        
        if( a*b*c*d == m )
        {
            printf("%lld\n",d);
        }
        if( a*b*c*d != m )
        {
            printf("-1\n");
        }
    }
    return 0;
}