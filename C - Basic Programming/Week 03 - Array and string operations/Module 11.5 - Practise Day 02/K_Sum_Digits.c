#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
   char ar[n];
  scanf("%s",&ar);
  //printf("%s\n",ar);

int c=0;

     for (int i = 0; i <n; i++)
    {
        
    c+=ar[i]-48;
    }
   
    printf("%d",c);

     return 0;
}