#include <stdio.h>
void fun(char s[])
{
    s[2] = 'o';
    printf("%s\n", s);
    printf("%d\n", strlen(s));
}
int main()
{
    char s[10];
    // scanf("%s", &s);
    scanf("%s", s);
    fun(s);

    return 0;
}