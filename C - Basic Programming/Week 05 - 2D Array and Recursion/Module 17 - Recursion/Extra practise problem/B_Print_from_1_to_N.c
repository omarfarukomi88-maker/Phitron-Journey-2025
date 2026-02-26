#include <stdio.h>
void show(int n, int i)
{
    // if(i==n)
    // {
    //     return;
    // }
    printf("%d\n", i);
    if (i == n)
    {
        return;
    }
    show(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    show(n, 1);
    return 0;
}