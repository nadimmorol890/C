#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char ar[n+1];
        scanf("%s",&ar);
        int count_T = 0;
        int count_P = 0;
        for(int i=0;i<n;i++)
        {
            if(ar[i] == 'T')
            {
                count_T++;
            }
            else if(ar[i] == 'P')
            {
                count_P++;
            }
        }
        if(count_T > count_P)
        {
            printf("Tiger\n");
        }
        else if(count_P > count_T)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
        
    }
    return 0;
}
