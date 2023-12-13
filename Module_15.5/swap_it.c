#include<stdio.h>
int swap_it(int *x,int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
   
    swap_it(&x,&y);
    
    printf("%d %d",x,y);
    
    return 0;
}