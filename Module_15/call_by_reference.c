#include<stdio.h>

void fun(int * p)
{
    *p = 30;
}
int main()
{
    int x = 10;
    fun(&x);
    printf("main er x er value - %d\n",x);
    return 0;
}