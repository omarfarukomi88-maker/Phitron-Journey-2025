#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if(tk >= 1000)
    {
        printf("CoxBazar gurte jabo\n");
    }
    else if(tk >= 500)
    {
        printf("Dhaka gurte jabo\n");
    }
    else if(tk >= 200)
    {
        printf("Sirajganj gurte jabo\n");
    }
    else
    {
        printf("Kothaw gurte jabo na\n");
    }
    return 0;
}