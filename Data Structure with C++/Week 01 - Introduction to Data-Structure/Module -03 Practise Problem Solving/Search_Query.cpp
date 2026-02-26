#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int value;
        cin >> value;
        int flag = 0;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ar[mid] == value)
            {
                flag = 1;
                break;
            }
            else if (ar[mid] > value)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}