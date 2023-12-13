#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int cnt[m+1];
    for(int i=0;i<=m;i++)
    {
        cnt[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int val = ar[i];
        cnt[val]++;
    }
    
    for(int i=1;i<m+1;i++)
    {
        printf("%d\n",cnt[i]);
    }
    return 0;
}