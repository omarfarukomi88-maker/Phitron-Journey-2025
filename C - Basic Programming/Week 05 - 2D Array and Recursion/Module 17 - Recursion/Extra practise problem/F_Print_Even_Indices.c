#include <stdio.h>
void print_arr(int ar[], int n, int i)
{
    if (i % 2 == 0)
    {
        printf("%d ", ar[i]);
    }
    if (i == 0)
    {
        return;
    }
    print_arr(ar, n, i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    print_arr(ar, n, n - 1);
    return 0;
}