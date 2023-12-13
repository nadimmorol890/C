#include<stdio.h>

int char_to_ascii(char x)
{
    return x;
}
int main()
{
    char x;
    scanf("%c",&x);
    int ascii_value = char_to_ascii(x);
    printf("%d",ascii_value);
    return 0;
}