#include<stdio.h>
int main()
{
    int n1;
    scanf("%d",&n1);    //first array size
    int a[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);      //first array input
    }

       int n2;
    scanf("%d",&n2);    //second array size
    int b[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);  //second array input
    }
    
       int c[n1+n2];        //new array size for copy a and b array ,so size will be added n1 and n2 
    for(int i=0;i<n1+n2;i++)
    {
        c[i]=a[i];          //a array index value copying c array
    }

    for(int i=0;i<n1+n2;i++)
    {
        c[n1+i]=b[i];
    }
      for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}