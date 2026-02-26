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
        int ar[n];

        int target = n / 2;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (ar[i] % 2 == 0)
                {
                    count++;
                }
            }
            cout << abs (target - count) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}