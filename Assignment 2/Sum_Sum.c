#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int sum_positive=0;
    int sum_negative=0;
    int v;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&v);
        if(v>0)
        {
            sum_positive = sum_positive + v;
        }
        else if(v<0)
        {
            sum_negative = sum_negative + v;
        }
    }
    printf("%d %d\n",sum_positive,sum_negative);

    return 0;
}