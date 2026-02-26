#include <stdio.h>
int main()
{
    char s[20];
    scanf("%s", &s);
    printf("%s\n", s);  //print the string 

    int count = 0;  //take a varriable for count
    for (int i = 0; s[i] != '\0'; i++)  // loop start from the index,,
                                        //condition is index of string stop by null so if the string not equal to null
    {
        count++;            //if the index doesnt have \0 then count ++
    }
    printf("%d", count);
    return 0;
}