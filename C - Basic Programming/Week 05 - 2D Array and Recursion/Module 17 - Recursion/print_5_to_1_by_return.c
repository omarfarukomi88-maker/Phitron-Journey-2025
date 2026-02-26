#include<stdio.h>
void func(int i)
{
    if(i==6)
    {
        return;
    }
    func(i+1);
    printf("%d\n",i); //print after the return frome 6 stract 
}
int main()
{
    func(1);
    return 0;
}