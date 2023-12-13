#include<stdio.h>
void fun(char * ar,int n)
{
    ar[0] = 'G';
}
int main()
{
    char ar[6] = "Hello";
    fun(ar,5);
    printf("%s ",ar);
    return 0;
}