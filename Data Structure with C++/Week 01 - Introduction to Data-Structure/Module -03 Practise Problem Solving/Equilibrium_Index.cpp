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
        int pre[n];
        pre[0] = ar[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + ar[i];
        }
        int flag = 0;
        int index = 0;
        for (int i = 1; i <= n; i++)
        {
            if (pre[i - 1] == pre[n - 1] - pre[i - 1] - ar[i])
            {
                flag = 1;
                index = i;
                break;
            }
            // cout << pre[i] <<" ";
        }
        if (flag == 1)
        {
            cout << index;
        }
        else
        {
            cout << "NO";
        }

    return 0;
}