#include <stdio.h>
#include<stdbool.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int i = 0;
    while (true)
    {
        if (a[i] == '\0')   //a jodi age ses hoy
        {
            printf("A is smaller");
            break;
        }
        else if (b[i] == '\0')  //b jodi age ses hoy
        {
            printf("B is smaller");
             break;
        }
        else if (a[i] =='\0' && b[i]=='\0') //a b dutoi shoman
        {
            printf("Equal");
             break;
        }
        else if(a[i]>b[i])  // b jodi a er theke soto hoy 
        {
            printf("B is smaller");
             break;
        }
        else if (b[i]>a[i]) // a jodi b er theke soto hoy
        {
            printf("A is smaller");
             break;
        }
        else if(a[i]==b[i]) //a and b josi shoman hoy 
        {
             i++;
        }

        i++;
    }

    return 0;
}