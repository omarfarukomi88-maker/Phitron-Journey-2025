#include<stdio.h>
int main()
{   
    long long int tk;
    scanf("%lld",&tk);
    if(tk>1000)
    {
        printf("I will buy Punjabi\n");
       
        if (tk>=1500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
        
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}