#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int s_i;
    scanf("%d",&s_i);
    int pos = 0;
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(ar[i] == s_i)
        {
            pos = i;
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    printf("%d is found at position %d\n",s_i,pos);
    else
    printf("Not found");
    return 0;



    //Nadim Morol


}