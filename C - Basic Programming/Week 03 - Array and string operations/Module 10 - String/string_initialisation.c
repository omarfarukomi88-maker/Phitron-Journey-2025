#include<stdio.h>
int main()
{
    //char s[4]={'O','M','A','R'};    //here string size and cahr are equal no null charecter present so some gurvage value print
   // char s[5]={'O','M','A','R','\0'}; //here we give null charecter so code print perfectly.
                                        //'\0' not mendary but size must be taken +1 from the charecter size
   
   
  char s[20]="Md Omar Faurk Omi";  //we can initialaize by "with space" no need {, ,} this.. 


      printf("%s",s);

    return 0;
}