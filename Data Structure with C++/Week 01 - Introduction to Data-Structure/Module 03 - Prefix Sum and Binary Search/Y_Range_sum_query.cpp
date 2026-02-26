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
    // for(int i=1;i<=n;i++)        //showing prefix sum value
    // {
    //     cout << pre[i] << " ";
    // }

    // for (int i = 1; i <= q; i++)
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

    // ________this code with TLE____________
    // // for (int i = 1; i <= q; i++)
    // // {
    // //     int l;
    // //     int r;
    // //     cin >> l >> r;
    // //     int sum = 0;
    // //     for (int j = l; j <= r; j++)
    // //     {
    // //         sum += v[j];
    // //     }
    // //     cout << sum << endl;
    // // }

    // while (q--)
    // {
    //     int l;
    //     int r;
    //     cin >> l >> r;
    //     int sum = 0;
        //     for (int j = l; j <= r; j++) //order___ of ___o(q*n)
        //     {
        //         sum += v[j];
        //     }
    //     cout << sum << endl;
    // }
    return 0;
}
