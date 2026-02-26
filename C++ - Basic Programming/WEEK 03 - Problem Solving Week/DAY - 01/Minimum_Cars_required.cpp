#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        // float car = n / 4;
        if (n < 4)
        {
            cout << "1" << endl;
        }
        else if (n % 2 != 0)
        {
            cout << (n/4)+1 << endl;
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << n / 4 << endl;
            }
            else
            {
                cout << (n / 4) + 1 << endl;
            }
        }
    }

    return 0;
}