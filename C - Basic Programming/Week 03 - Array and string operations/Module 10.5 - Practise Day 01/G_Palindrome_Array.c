#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    // int i=0;
    // int j=n-1-i;
    // while (i<j)
    // {
    //    if(ar[i]!=ar[j])
    //    {
    //     printf("NO\n");
    //     return 0;
    //    }

    //    i++;
    //    j--;
    // }
    //     printf("YES\n");

    int org = 0;
    int rev = 0;
    for (int i = 0; i < n; i++)
    {
        org = org * 10 + ar[i];
    }
    // printf("\n");
    for (int i = n - 1; i >= 0; i--)
    {
        rev = rev * 10 + ar[i];
    }
    if (org == rev)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}