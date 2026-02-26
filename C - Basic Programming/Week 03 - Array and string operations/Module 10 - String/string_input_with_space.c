#include<stdio.h>
int main()
{
    char s[50];
   //scanf("%s",&s); //scanf can't input space ..when space arrive string will stop here.

   // gets(s);        //gets input function for string .its input with space..but gets is not stundart form.
                        //gets(string name);  syntex gets
    
    fgets(s,25,stdin); //fgets is standert input function for string
                        //fgets(string name,string size,stdin)  syntex fgets
                        //fgets print with space but its cant input enter .if give enter then 
                        //string will stop there but taking enter as a charecter.
                        
                        //string size must be added with null charecter 
                        //bcz fgets function always store null in the last index

                        //so when use fgets then enter will be added as a charecter
                        //normaly  use scanf func when dont need space but with space use fgets.
    printf("%s",s);
    return 0;
}