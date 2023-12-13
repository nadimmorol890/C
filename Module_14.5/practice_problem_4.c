#include<stdio.h>
char small_to_capital(char x)
{
    return x;
}
int main()
{
    char x;
    scanf(" %c",&x);
    int capital_value = small_to_capital(x)-(32);
    printf("%c",capital_value);
    return 0;
}