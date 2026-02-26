#include <stdio.h>
void usf(int *ptr) // recive variable addrerse in pointer
{
    *ptr = 20000;         // update variable valuw by direference
    printf(" value ptr - %d\n", *ptr); // print ptr uppdate value
    printf("addrese variable - %p\n", ptr);  // print initialize address of x
    printf("address pointer - %p\n", &ptr); // print ptr pointer address
}
int main()
{
    int x = 10;
    printf("value x - %d\n", x);  // print value of x
    usf(&x);            // pass variable address
    printf("address x - %p\n", &x); // print x address
    printf("update value x - %d\n", x);  // print update value of x
    return 0;
}
