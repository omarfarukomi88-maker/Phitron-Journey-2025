#include<stdio.h>
int main()
{
    char a[10],b[10];
    scanf("%s %s",&a,&b);

    int length1=strlen(a);  //strlen --string ar size ber korte
    int length2=strlen(b);
    printf("length A :%d length B :%d\n",length1,length2);

    strcat(a,b);    //strcat --for concrete string--b er char a er shate add kore rakha hoy..
    printf("%s %s\n",a,b);

    strcpy(a,b);    // strcpy -- b ke copy kore a te rakhar jonno
    printf("%s %s\n",a,b);

    int value=strcmp(a,b);  //strcmp compare two string.
    printf("%d",value);     //its return 0 for equal.
    return 0;               //positive number for b smaller .
}                           // negetive number for a smaller.

