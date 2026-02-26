#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        int min = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (ar[i] + ar[j] + j - i < min)
                {
                    min = ar[i] + ar[j] + j - i;
                }
            }
        }
        cout << min <<endl;
    }

    // for(int i=1;i<=n;i++)
    // {
    //     cout << ar[i];
    // }
    return 0;
}