#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int minimum = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (ar[i] >= k)
            {
                minimum = min(ar[i] % k, minimum);
            }
        }
        if (minimum == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
            cout << minimum << endl;
    }
    return 0;
}