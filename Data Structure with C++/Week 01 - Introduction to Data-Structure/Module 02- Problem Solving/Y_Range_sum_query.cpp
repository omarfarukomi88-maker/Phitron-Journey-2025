#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    // int ar[n];
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> v2(q * 2);
    for (int i = 0; i < q * 2; i++)
    {
        cin >> v2[i];
    }

    for (int i = 0; i < q * 2; i += 2)
    {
        int sum = 0;
        int l = v2[i]-1;
        int r = v2[i + 1]-1;
        for (int j = l; j <= r; j++)
        {
            sum += v[j];
        }
        cout << sum << endl;
    }

    return 0;
}