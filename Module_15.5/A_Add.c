#include<stdio.h>
int sum(int x,int y)
{
    int sum = x+y;
    return sum;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",x+y);
    return 0;
}