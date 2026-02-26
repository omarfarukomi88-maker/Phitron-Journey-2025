#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    strcat(a, b);   //b ke copy kore a er modde rakhte
                    //strcat concrete korte duita string ke
    printf("%s %s", a, b);
    return 0;
}