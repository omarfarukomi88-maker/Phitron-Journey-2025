#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            // if (ar[i] * x <= y)
            // {
            //     count += ar[i] * x;
            // }
            // else
            // {
            //     count += y;
            // }
            count+=min(ar[i]*x,y);
        }
        cout << count << endl;
    }
    return 0;
}