// #include <stdio.h>
// int main()
// {
//     long int n;
//     scanf("%ld", &n);
//     for (long int i = 0; i < n; i++)
//     {
//             long long int m;
//             int a, b, c;
//             scanf("%lld %d %d %d", &m, &a, &b, &c);
//         // long long int x = a * b * c;
//             int flag = 0;
//             for (int i = 0; i <= m; i++)
//             {
//                 if (a * b * c * i == m)
//                 {
//                     printf("%d\n", i);
//                     flag = 1;
//                     break;
//                 }
//             }
//             if (flag == 0)
//             {
//                 printf("-1\n");
//             }
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     long long int m;
//     scanf("%d",&m);
//     long long int a,b,c;
//     scanf("%lld %lld %lld",&a,&b,&c);
//     long long int p = a*b*c;
//     if(m==0 && p==0)
//     {
//         printf("-1\n");
//     }
    
    
//     if(m%p!=0)
//     {
//         printf("-1\n");
//     }

//     int product=m/p;
//     if(product>=0)
//     {
//         printf("%d\n",product);
//     }
//     // else{
//     //     printf("-1\n");
//     // }


//     return 0;
// }
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int m;
    scanf("%d",&m);
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    long long int p = a*b*c;
    if(m%p==0){
        printf("%d\n",m/p);
    }
    else if(m%p!=0){
        printf("%d\n",-1);
    }
    }
    
    return 0;
}