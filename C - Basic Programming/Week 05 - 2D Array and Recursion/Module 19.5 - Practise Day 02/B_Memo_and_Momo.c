#include <stdio.h>
int main()
{
    long long int memo, momo, x;
    scanf("%lld %lld %lld", &memo, &momo, &x);

    if (memo % x == 0 && momo % x == 0)
    {
        printf("Both\n");
    }
    else if (memo % x == 0)
    {
        printf("Memo\n");
    }
    else if (momo % x == 0)
    {
        printf("Momo\n");
    }

    else
    {
        printf("No One\n");
    }
    return 0;
}