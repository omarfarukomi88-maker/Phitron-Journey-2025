#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)         //array input
    {
        scanf("%d", &ar[i]);
    }

    int min = ar[0];
    int idxmin = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > ar[i])                // minimum value and minimum value index number 
        {
            min = ar[i];
            idxmin = i;
        }
    }

    int max = ar[0];
    int idxmax = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])                  //maxmum value and maximum valu index number
        {
            max = ar[i];
            idxmax = i;
        }
    }
    int tmp = ar[idxmax];
    ar[idxmax] = ar[idxmin];             //swap maximum index value to minimum index value wit tmp
    ar[idxmin] = tmp;

    for (int i = 0; i < n; i++)
    {

        printf("%d ", ar[i]);           //ptint the exat array
    }

    return 0;
}