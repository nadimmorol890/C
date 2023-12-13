#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        
        int ans = (d) - (m1*d)/(m1+m2);
        
        printf("%d\n",ans);
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int T;
//     scanf("%d", &T);

//     for(int i=0;i<T;i++)
//     {
//         int M1, M2, D;
//         scanf("%d %d %d", &M1, &M2, &D);

        
//         int initial_days = D;
//         int new_days = (M1 * initial_days) / (M1 + M2);
//         int ans = initial_days - new_days;
//         printf("%d\n",ans);
//     }

//     return 0;
// }

