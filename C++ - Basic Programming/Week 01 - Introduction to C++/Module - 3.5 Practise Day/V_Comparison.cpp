#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    char c;
    int n2;
    cin >> n1 >> c >> n2;

    if (c == '>')
    {
        if (n1 > n2)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (c == '<')
    {
        if (n1 < n2)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (c == '=')
    {
        if (n1 == n2)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    return 0;
}