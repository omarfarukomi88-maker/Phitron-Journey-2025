#include <stdio.h>
int main()
{
    char s[10];

    printf("%d\n", s[0]);  

    scanf("%s", &s);   

    printf("%s\n", s);  

    printf("%d\n", s[5]);   

    return 0;
}
 //string store null in last finishing string index
  //string read space as a end of string
  // string print string oversize foe windows fault 
  // string must keep 1+ index for store null but if didnot it not right process 
  