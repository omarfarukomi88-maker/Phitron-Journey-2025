#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);

    for (int i = 0; i < q; i++)
    {
        int flag = 0;
        int l = 0;
        int r = n - 1;
        int val;
        cin >> val;
        while (l<=r)
        {
            int max = (l + r) / 2;
            if (ar[max] == val)
            {
                flag = 1;
                break;
            }
            else if (ar[max] > val)
            {
                r = max - 1;
            }
            else
            {
                l = max + 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}