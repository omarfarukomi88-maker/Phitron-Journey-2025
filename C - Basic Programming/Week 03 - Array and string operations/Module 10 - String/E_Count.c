#include<stdio.h>
int main()
{
    char s[1000001];
    scanf("%s",&s);
int sum=0;
for(int i=0;s[i]!='\0';i++)
{
    sum=sum+s[i]-48;        //48 is a assci of 0..char to int 
    
}
printf("%d",sum);

    return 0;
}