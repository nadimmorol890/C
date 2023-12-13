#include<stdio.h>
int main()
{
    long long int eye,mouth,body;
    long long int ans=0;
    long long int min;
    scanf("%lld %lld %lld",&eye,&mouth,&body);

    if(eye<mouth && eye<body) min = eye;
    else if(mouth<eye && mouth<body) min = mouth;
    else min = body;

    eye = eye-min;
    mouth = mouth-min;
    body = body-min;
    ans = ans+min;

    long long int halfEye = eye/2;

    if(halfEye<body)
    {
        ans = ans+halfEye;
    }
    else
    {
        ans = ans+body;
    }
    printf("%lld",ans);
    return 0;
}

// #include<stdio.h>
// int main()
// {
//   long long int eye,mouth,body;
//   long long int ans=0;
//   long long int min;
//   scanf("%lld %lld %lld",&eye,&mouth,&body);

//   if(eye<mouth && eye<body) min = eye; 
//   else if(mouth<eye && mouth<body) min = mouth;
//   else min = body;

//   eye =eye-min;
//   body =body-min;
//   mouth =mouth-min;
//   ans =ans+min;

//   long long int halfEye = eye/2;
 
//  if(halfEye<body){
//   ans+=halfEye;
//  }
//  else{
//   ans=ans+body;
//  }

//   printf("%lld",ans);

//   return 0;
// }