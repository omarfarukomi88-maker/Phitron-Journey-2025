#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, v;
        cin >> b >> v;
        int ar[b];
        for (int i = 0; i < b; i++)
        {
            cin >> ar[i];
        }
        int sum = 0;
        for (int i = 0; i < b; i++)
        {
            sum += ar[i];
        }
        cout << ceil((double)sum / v) << endl;
        // if (sum <= v)
        // {
        //     cout << 1 << endl;
        // }
        // else
        // {
        //     cout << sum / v << endl;
        // }
    }
    return 0;
}