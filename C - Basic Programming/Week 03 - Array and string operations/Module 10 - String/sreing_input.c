#include <stdio.h>
int main()
{
    char s[10];
    
    scanf("%s", &s); // string or charecter-array format spechifire using %s canbe input in one line

    printf("%s\n", s); // print using formate spechifire in one line

    printf("%c\n", s[2]); // empty index store gurvage but dont show without command

    printf("%d\n", s[5]); // string store null charecter after the string finishing index always .
                          // by this string undustrant that where string will be stop

    for (int i = 0; i < 10; i++) // using loop canbe print but show the gurvage number
    {
        printf("%c", s[i]);
    }

    return 0;
}