#include<stdio.h>

int fun(char ar[],int i)
{
    if(ar[i]=='\0') return 0;
    int l = fun(ar,i+1);
    return l+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    char ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&ar[i]);
    }
    int length = fun(ar,0);
    printf("Length = %d",length);
    return 0;
}