#include <stdio.h>
// return_type function_varriable_name (Paremeters)
// {
//     exucution
//     return ;
// }

int sum(int num1, int num2) // sumition functiuon
{
    int ans = num1 + num2;
    return ans;
}
int sub(int num1, int num2) // subtraction functiuon
{
    int ans = num1 - num2;
    return ans;
}
int mul(int num1, int num2) // multrification functiuon
{
    int ans = num1 * num2;
    return ans;
}
float div(int num1, int num2) // divition functiuon
{
    float ans = (float)num1 / num2;
    return ans;
}

int main()
{
    // int val= sum(10,20);
    // printf("%d",val);

    // printf("%d",sum(50,60));

    int a, b;
    scanf("%d %d", &a, &b);

    int res1 = sum(a, b);
    printf("sumition = %d\n", res1);

    int res2=sub(a,b);
    printf("subtraction = %d\n",res2);

    int res3=mul(a,b);
    printf("multification = %d\n",res3);

    float res4=div(a,b);
    printf("divition = %.2f\n",res4);

    return 0;
}