#include <stdio.h>
void fun(int *n1, int *n2)
{
    //int sum = n1 + n2;
   // printf("%d", sum);
    printf("%d",*n1+*n2);
}
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    fun(&n1, &n2);
    return 0;
}