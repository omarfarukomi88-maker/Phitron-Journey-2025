#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        char s[51], t[51];
        scanf("%s %s", &s, &t);
        char n[101] = {0};
        int ls = strlen(s);
        int lt = strlen(t);
        for (int i = 0, j = 0; j < ls; i += 2, j++)
        {
            n[i] = s[j];
            //  n[i+1]=t[i];
        }
        for (int i = 1, j = 0; j < lt; i += 2, j++)
        {
            n[i] = t[j];
        }
        // printf("%s",n);
        int ln=strlen(n);
        for (int i = 0; i <101; i++)
        {
            if (n[i] != 0)
            {
                printf("%c", n[i]);
            }
          
        }
          printf("\n");
    }

    return 0;
}