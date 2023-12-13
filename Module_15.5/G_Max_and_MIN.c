#include<stdio.h>
void findMinMax(int n,int ar[n],int *min,int *max)
{
    *min = ar[0];
    *max = ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]<*min)
        {
            *min = ar[i];
        }
        if(ar[i]>*max)
        {
            *max = ar[i];
        }
    }
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
    int min,max;
    findMinMax(n,ar,&min,&max);
    printf("%d %d\n",min,max);
    return 0;
}