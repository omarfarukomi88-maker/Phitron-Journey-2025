#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);

    int length=strlen(b);   //b string length

    for(int i=0;i<=length;i++)    //for copying last index null for stop printing so loop continue equal with length
    {
        a[i]=b[i];      //b string char copying
    }

    printf("%s %s",a,b);

    return 0;
}