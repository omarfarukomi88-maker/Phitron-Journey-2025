#include <stdio.h>
#include <limits.h>
int main()
// maximum
{
    int n;
    scanf("%d", &n);
    int mx = INT_MIN;
    int i = 1;
    while (i <= n)
    {
        int m;
        scanf("d", &m);
        if (m > mx)
        {
            mx = m;
        }
     
    }
    printf("%d", mx);

    // int n;                  //maximum with c and int_main
    // scanf("%d", &n);

    // int max = INT_MIN;
    // for (int i = 1; i <= n; i++)
    // {
    //     int x;
    //     scanf("%d", &x);

    //     if (x > max)
    //     {
    //         max = x;
    //     }
    // }
    // printf("%d", max);
                                 //minimun with c and int_main
    // int n;
    // scanf("%d",&n);

    // int min=INT_MAX;
    // for(int i=1;i<=n;i++)
    // {
    //     int x;
    //     scanf("%d",&x);
    //     if(x<min)
    //     {
    //         min=x;
    //     }
    // }
    // printf("%d",min);


    return 0;
}