#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    scanf("%s", &s);

    int size=strlen(s);     //strlen func show the length of string 
    printf("%d\n",size);

    printf("%d",strlen(s));

    // int count = 0;
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d", count);

    return 0;
}