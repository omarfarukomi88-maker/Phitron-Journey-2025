#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
//minimum

    if(x<=y && x<=z)
    {
        printf("%d ",x);
    }
    else if(y<=z && y<=x)
    {
        printf("%d ",y);
    }
    else if(z<=x && z<=y)
    {
        printf("%d ",z);
    }
  

//maximum
    if(x>=y && x>=z)
    {
        printf("%d",x);
    }
    else if(y>=z && y>=x)
    {
        printf("%d",y);
    }
    else if(z>=x && z>=y)
    {
        printf("%d",z);
    }


    return 0;
}