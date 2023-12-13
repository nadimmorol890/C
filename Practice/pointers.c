#include<stdio.h>
int main()
{
    // int x = 5;
    // int *p;
    // p = &x;

    int ar[5] = {1,2,3,4,5};
    // printf("%d\n",*ar);
    // printf("%d\n",*(ar+1));
    // printf("%d\n",*(ar+2));
    // printf("%d\n",*(ar+3));
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d\n",*(ar+i));
    // }
    for(int *i=ar;i<(ar+5);i++)
    {
        printf("%d\n",*i);
    }
    return 0;
}