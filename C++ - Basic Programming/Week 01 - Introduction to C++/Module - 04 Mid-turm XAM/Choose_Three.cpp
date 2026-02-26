#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int m = 1; m <= t; m++)
    {
        int n, sum;
        cin >> n >> sum;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (ar[i] + ar[j] + ar[k] == sum)
                    {
                        flag = 1;
                        cout << "YES" << endl;
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}