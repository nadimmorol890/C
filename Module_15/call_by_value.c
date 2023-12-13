#include<stdio.h>

void fun(int x)
{
    x = 20;
}
int main()
{
    int x = 10;
    printf("main x er value - %d\n",x);
    fun(x);
    return 0;
}