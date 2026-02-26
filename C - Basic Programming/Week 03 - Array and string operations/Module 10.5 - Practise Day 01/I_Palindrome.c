#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    int org = 0;
    int rev = 0;
    int size=strlen(s);
    for (int i = 0; s[i]!='\0'; i++)
    {
        org = org * 10 + s[i];
    }
    // printf("\n");
    for (int i = size; i >= 0; i--)
    {
        rev = rev * 10 + s[i];
    }
    if (org == rev)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;

}