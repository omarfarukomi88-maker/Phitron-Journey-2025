#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ar[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> ar[i];
        }
        bool hat = false;
        for (int i = 0; i < 6; i++)
        {
            if (ar[i] == 'W' && ar[i + 1] == 'W' && ar[i + 2] == 'W')
            {
                hat = true;
            }
        }
        if (hat == true)
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