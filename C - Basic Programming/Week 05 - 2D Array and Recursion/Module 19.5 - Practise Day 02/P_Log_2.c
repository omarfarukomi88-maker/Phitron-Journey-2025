#include <stdio.h>
void log_rec(long long int n,long long int count)
{
    if (n <= 1)
    {
        printf("%lld", count);
        return;
    }
    n = n / 2;
    log_rec(n, count + 1);
    // printf("%d ", count);
    return;
}
int main()
{
   long long int n;
    scanf("%lld", &n);
    log_rec(n, 0);
    return 0;
}