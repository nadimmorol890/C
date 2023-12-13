#include<stdio.h>
#include<math.h>
int main()
{
    // double x;
    // scanf("%lf",&x);
    // int ans = ceil(x);
    // int ans = floor(x);
    // int ans = round(x);
    // printf("%d",ans);

    // double x;
    // scanf("%lf",&x);
    // double ans = sqrt(x);
    // printf("%0.6lf",ans);

    double a,b;
    scanf("%lf %lf",&a,&b);
    double ans = pow(a,b);
    printf("%0.2lf",ans);
    return 0;
}

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     int ans = abs(x);
//     printf("%d",ans);
//     return 0;
// }