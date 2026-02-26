#include <stdio.h>
int main()
{
    long long int a, b, c;
    long long int d;
    scanf("%lld %lld %lld", &a, &b, &c);
    scanf("%lld",&d);
   

     if (a + b - c == d)
    {
        printf("YES\n");
    }
    else if (a + b * c == d)
    {
        printf("YES\n");
    }
    else if (a - b * c == d)
    {
        printf("YES\n");
    }
    else if (a - b + c == d)
    {
        printf("YES\n");
    }
    else if (a * b + c == d)
    {
        printf("YES\n");
    }
    else if (a * b - c == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

   
 
    return 0;
}