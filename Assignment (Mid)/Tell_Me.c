#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[j]);
        }
        int x;
        scanf("%d",&x);
        
        int valX = 0;
        
        for(int j=0;j<n;j++)
        {
            if(ar[j]==x)
            {
                valX = 1;
                break;
            }
        }
        if(valX)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}