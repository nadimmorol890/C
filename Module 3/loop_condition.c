#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i+=1)
    {
       if(i%2==i)
       {
        printf("%d Yes\n",i);
       }
       else
       {
        printf("%d No\n",i);
       }

    }
    return 0;
}