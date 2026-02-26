#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    if (x >= '0' && x <= '9')
    {
        printf("IS DIGIT");
    }
    // else if (x>='A' & x<='Z')
    // {
    //     printf("ALPHA\n");
    //     printf("IS CAPITAL\n");
    // }
    //     else if(x>='a' & x<='z')
    //     {
    //         printf("ALPHA\n");
    //         printf("IS SMALL\n");
    //     }

    else
    {
        printf("ALPHA\n");
        if (x >= 'A' && x <= 'Z')
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }

    return 0;
}
