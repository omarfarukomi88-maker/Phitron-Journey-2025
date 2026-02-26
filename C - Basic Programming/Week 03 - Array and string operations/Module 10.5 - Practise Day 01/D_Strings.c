#include <stdio.h>
#include <string.h>
int main()
{
    char s1[11];
    char s2[11];
    scanf("%s %s", &s1, &s2);

    int sz1 = strlen(s1);
    int sz2 = strlen(s2);

    printf("%d %d\n", sz1, sz2);
     printf("%s%s\n",s1,s2);

    // char n[sz1 + sz2];
    // for (int i = 0; i < sz1; i++)
    // {
    //     n[i] = s1[i];
    // }
    // for (int i = 0; i < sz1 + sz2; i++)
    // {
    //     n[sz1 + i] = s2[i];
    // }
    // for (int i = 0; i < sz1 + sz2; i++)
    // {
    //     printf("%c", n[i]);
    // }

    char tmp = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp;
    printf("%s %s", s1, s2);

    return 0;
}