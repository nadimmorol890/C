#include<stdio.h>
int main()
{
    float x,p;
    scanf("%f %f",&x,&p);
    
    float original_price = (100*p)/(100-x);
    
    printf("%0.2f",original_price);
    return 0;
}