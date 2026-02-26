#include<stdio.h>
#include<string.h>
int is_palindrome(char st[],int size)
{
    int np=1;
    for(int i=0,j=size-1;i<size/2;i++,j--)
    {
        if(st[i]!=st[j])
        {
            np=0;
            return np;
        }
    }
    return np;
}
int main()
{
    char st[1001];
    scanf("%s",st);
    int size=strlen(st);
    int result=is_palindrome(st,size);

    if(result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}