#include <stdio.h>
void print_arr(int ar[], int n, int i)
{
    // if (i==0)
    // {
    //     return;
    // }
    // print_arr(ar,n,i+1);  //reverse print
    printf("%d\n", ar[i]);
     if (i==0)
    {
        return;
    }
    print_arr(ar, n, i-1);
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
   // int i = 0;
   int i=n-1;
    print_arr(ar, n, i);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", ar[i]);
    // }
    return 0;
}