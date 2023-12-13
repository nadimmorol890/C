#include<stdio.h>
void odd_even()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int count_even = 0;
    int count_odd = 0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            (count_even)++;
        }
        if(ar[i]%2==1)
        {
            (count_odd)++;
        }
    }
    printf("%d %d",count_even,count_odd);
}

int main()
{
    odd_even();
    return 0;
}