#include<stdio.h>

char capital_to_small(char x)
{
    return x;
}
int main()
{
    int x;
    scanf("%c",&x);
    int small_value = capital_to_small(x)+32;
    printf("%c",small_value);
    return 0;
}