#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    //*p=100;
    // int y = 100;
    int y = NULL;
    p = &y;
    // cout << "fun pointer-" << p << endl;
    cout << "In Function-" << *p << endl;
}
int main()
{
    int x = 10;
    int *p = &x;
    fun(p);

    // cout << "main pointer-" << p << endl;
    cout << "In Main-" << *p << endl;
    cout << x << endl;
    return 0;
}