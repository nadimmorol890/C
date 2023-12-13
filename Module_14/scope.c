#include<stdio.h>
int x = 500;   //global
void fun(void)
{
    int s = 200;
    printf("Fun er s er address - %p\n",&s);
    printf("Fun er x er value - %d\n",x);
}
int main()
{
    int s = 100;
    printf("Main er s er address - %p\n",&s);
    fun();
    printf("Main er x er value - %d\n",x);
    return 0;
}