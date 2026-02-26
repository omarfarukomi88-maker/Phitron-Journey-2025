#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int x[5];  static array
    int *x = new int[5];    //dynamic array
    for (int i = 0; i < 5; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
}