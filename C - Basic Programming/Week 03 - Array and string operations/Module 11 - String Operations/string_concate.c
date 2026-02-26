#include <stdio.h>
int main()
{
    char a[101], b[101]; 
    scanf("%s %s", &a, &b); //input 2 string

    int len_a = strlen(a);  //length a 
    int len_b = strlen(b);  //length b

    for (int i = 0; i <= len_b; i++)    //loop cholbe b er lenght porjonto cz b cpy korbo null shoho
    {
        a[i + len_a] = b[i];//ekhane a er last index theke b er value bosha  tai a er lenth +i theke index shuru hosse
    }

    printf("%s %s", a, b); //2 tai print korbo pore
    return 0;
}