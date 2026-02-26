#include <stdio.h>
void sum()  //no peremiter no return
{
    int a, b;
    scanf("%d %d", &a, &b); //input value 
    int ans = a + b;
    printf("%d", ans);  //print value
}
int main()
{
    sum(); //just call the function 

    return 0;
}