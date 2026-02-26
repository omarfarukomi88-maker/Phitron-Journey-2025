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
    int ct0 = 0, ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0, ct5 = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 0)
        {
            ct0++;
        }
        else if (ar[i] == 1)
        {
            ct1++;
        }
        else if (ar[i] == 2)
        {
            ct2++;
        }
        else if (ar[i] == 3)
        {
            ct3++;
        }
        else if (ar[i] == 4)
        {
            ct4++;
        }
        else if (ar[i] == 5)
        {
            ct5++;
        }
    }
    printf("0->%d\n", ct0);
    printf("1->%d\n", ct1);
    printf("2->%d\n", ct2);
    printf("3->%d\n", ct3);
    printf("4->%d\n", ct4);
    printf("5->%d\n", ct5);
    return 0;
}