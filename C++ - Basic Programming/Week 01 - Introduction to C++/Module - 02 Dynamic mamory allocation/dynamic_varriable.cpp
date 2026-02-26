// dynamic varriable jkhn func theke return hoy tkhn  auto dellet hoy na.
// static varriable return korle seta auto dellet hoye jay,,

#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    // int x = 120; //static avarriable
    // p = &x;
    // cout << "fun - " << *p << endl;

    int *a = new int; // dynamic varriable
    *a = 2025;
    p = a;
    cout << "fun - " << *p << endl;
    return;
}
int main()
{
    // int x = 10; // static varriable
    // int *p = new int;//dynamic varriable
    // *p=100;
    // cout << *p << endl;

    fun(); // call func for chack
    cout << "main - " << *p << endl;
    return 0;
}

// int funx() //we can return with static varriable also
// {
//     int x= 1023;
//     cout<< "funx - "<< x << endl;
//     return x;
// }
// int main()
// {
//     int x = funx();
//     cout << "main - " << x << endl;
//     return 0;
// }