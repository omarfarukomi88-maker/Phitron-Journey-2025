#include<stdio.h>
int main()
{
    // int n;
    // scanf("%d",&n);
    for(int i=1;;i++)
    {
        int x;
        scanf("%d",&x);

        if(x==1999)
        {
            printf("Correct\n");

            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}