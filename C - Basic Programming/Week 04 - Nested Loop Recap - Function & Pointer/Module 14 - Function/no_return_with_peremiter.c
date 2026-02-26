#include <stdio.h>

void sum(int n1, int n2) // no return dile void lekhte hobe
{
    int ans = n1 + n2;
   printf("%d", ans); //in no return then printf in define function
  //  return ; // its return from function 
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
   // printf("%d",sum(a, b)); //if using void it will be error
  //  printf(" Hello ");
    return 0;
}