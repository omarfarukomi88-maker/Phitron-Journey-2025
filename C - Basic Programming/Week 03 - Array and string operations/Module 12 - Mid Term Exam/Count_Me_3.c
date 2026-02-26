#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10000];
        scanf("%s", &s);
        int cp = 0, sm = 0, dg = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                sm++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cp++;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                dg++;
            }
        }
        printf("%d %d %d\n", cp, sm, dg);
    }

    return 0;
}