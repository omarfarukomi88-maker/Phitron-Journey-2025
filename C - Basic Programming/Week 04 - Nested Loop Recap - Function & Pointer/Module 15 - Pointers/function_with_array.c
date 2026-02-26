#include <stdio.h>
// void fun(int ar[])
void fun(int ar[], int n) // in function pass with array and its size
{
    // printf("fun function - %p\n",ar);
    // ar[1] = 145;


    // ar[0]=200;
    // ar[1]=500;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    //return ar; //it will be return first index not all array
}
int main()
{
    // int ar[5] = {10, 20, 30, 40, 50};
    // printf("main function - %p\n",ar);
    // fun(ar);                //in function array pass by reference
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", ar[i]);
    // }

    int n;
    scanf("%d", &n);    // input array size
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    fun(ar, n);     //pass in fun array and its size

    return 0;
}