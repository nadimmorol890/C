#include<stdio.h>

int my_len(char *x)
{
    int count = 0;
    while(*x != '\0')
    {
        x++;
        count++;
    }
    return count;
}
int main()
{
    char x[100];
    scanf("%s",&x);
    int length = my_len(x);

    printf("%d",length);
    
    return 0;
}
