#include <stdio.h>
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    // printf("%p \n", &ar[0]);
    // printf("%p \n", &ar[1]);
    // printf("%p \n", &ar[2]);     //every index conatin 4 byte  memery
    // printf("%p \n", &ar[3]);
    // printf("%p \n", &ar[4]);

    // printf("%p \n", &ar[0]);
    // printf("%p \n", ar);    //array name act like a pointer && store first index address and its value
    // printf("%d \n", *ar);

    // *ar= 1200;
    // printf("%d \n", *ar);    //cahnge value using pointer
    // printf("%d \n", ar[0]);

    // *(ar + 1) = 120; // from first index adding 1 go to next index 
    // printf("%d \n", ar[0]); // cahnge value using pointer
    // printf("%d \n", ar[1]);


    // *ar=100;
    // *(ar + 1) = 120;
    // *(ar + 2) = 180;
    // *(ar + 3) = 160;
    // *(ar + 4) = 850;
    //                         //from array name we can change every index value
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",ar[i]);
    // }

    return 0;
}