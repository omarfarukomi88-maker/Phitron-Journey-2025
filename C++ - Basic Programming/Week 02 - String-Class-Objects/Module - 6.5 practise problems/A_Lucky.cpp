#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int f = 0;
        int l = 0;
        for (int i = 0; i < 3; i++)
        {
            f += s[i];
        }
        for (int i = 3; i < 6; i++)
        {
            l += s[i];
        }
        if (f == l)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}