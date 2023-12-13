// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[17];
//     gets(a);
//     printf("%s\n",a);
    
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    fgets(a,18,stdin);
    a[16]='\0';
    printf("%s",a);
    
    return 0;
}