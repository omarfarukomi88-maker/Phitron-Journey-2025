#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int i = 1; i <= n; i++)    //order of (N*N) __ order of (N^2)
    //     {
    //         cout << "Omar Faruk"<<endl;
    //     }

    // }
    // int n, m;
    // cin >> n >> m;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++) // order of (N*M) __ order of (N^M)
    //     {
    //         cout << "Omar Faruk" << endl;
    //     }
    // }

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // order of (n)
    {
        for (int j = 1; j <= n; j++) // order of(n*n)
        {
            for (int k = 1; k <= n; k++) // order of(n*n*n)
            {
                cout << "Omar Faruk" << endl;
            }
        }
    }

    return 0;
}