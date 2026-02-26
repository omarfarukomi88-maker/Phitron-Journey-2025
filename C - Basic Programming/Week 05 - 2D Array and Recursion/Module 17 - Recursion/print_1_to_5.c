#include <stdio.h>
void func(int i)
{
    if (i == 6)     //base case
    {
        return;
    }
    printf("%d\n", i);
    // if (i == 50)
    // {
    //     return;
    // }
    // i++;

    func(i + 1);
}
int main()
{
    int i = 1;
    func(i);
    return 0;
}