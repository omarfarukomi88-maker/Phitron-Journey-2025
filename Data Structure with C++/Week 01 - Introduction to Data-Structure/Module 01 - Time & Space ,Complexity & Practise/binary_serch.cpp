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
    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;
        int flag = 0;
        for (int j = 0; j < n; j++) //order if (N*N) more than 10^7 for that get TLE In the CODE
        {
            if (ar[j] == m)
            {
                flag = 1;
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