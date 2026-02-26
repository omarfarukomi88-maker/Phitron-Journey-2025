#include <stdio.h>
void func(int i)
{
    if (i == 0) // condition for stop
    {
        return;
    }
    printf("%d\n", i);

    // if(i%2==0)
    // {
    //       printf("%d\n", i);     //print even number
    // }

    // if(i%2!=0)
    // {
    //       printf("%d\n", i); //print odd number
    // }

    func(i - 1); //  recursion
}
int main()
{
    // int n;
    // scanf("%d",&n);  //user unput
    // func(n);
    int i = 10;
    func(i);
    return 0;
}