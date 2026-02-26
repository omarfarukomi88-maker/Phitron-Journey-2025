#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    { // input array
        scanf("%d", &ar[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (i < n-i)
    //     {
    //         if (ar[i] != ar[n - 1 - i])
    //         {                                      //its dont a proper way some bug here
    //             printf("NO\n");
    //             return 0;
    //         }
    //         else
    //         {
    //             printf("YES\n");
    //             break;
    //         }
    //     }
    // }

        int j=n-1;
        int i=0;             //take variable chacking fisrt to last
       while(i<j)
       {
         if(ar[i]!=ar[j])
         {
            printf("NO\n");       //if fisrt and last arnt same then cannt perendulam
                                    // and then the programme will be end here
            return 0;
         }
         i++;
         j--;
       }
       printf("YES\n");       // if the upword condition false then obiusly its perendulam
    return 0;
}