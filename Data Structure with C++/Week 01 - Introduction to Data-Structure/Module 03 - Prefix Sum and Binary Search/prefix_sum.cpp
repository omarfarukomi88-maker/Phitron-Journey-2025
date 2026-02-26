#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    //_________prefix sum_________
    vector<long long int> pre(n + 1);
    pre[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    for (int i = 1; i <= n; i++) // showing prefix sum value
    {
        cout << pre[i] << " ";
    }
    cout << endl;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long int value = 0;
        if (l == 1)
        {
            value = pre[r];
        }
        else
        {
            value = pre[r] - pre[l - 1];
        }
        cout << value << endl;
    }
    return 0;
}