#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x); // referencing value to addresse
    printf("%d\n", x);
    int *ptr;
    ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr); // dereferencing addresse to value

    *ptr = 200; // change x valuw using pointer
    printf("%d\n", x);

    return 0;
}