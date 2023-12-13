#include<stdio.h>
#include<stdlib.h>
int my_abs(int n)
{
    int ans = abs(n);
    printf("%d",ans);
} 
int main()
{
    int n;
    scanf("%d",&n);
    my_abs(n);
    
    return 0;
}