#include <bits/stdc++.h>
using namespace std;
int main()
{
    // complexity
    // 1. allwars take wrost number
    // 2. ignor constant

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // order of (n/2) & (n*2) & (n+5) ignor contant
    {                            // its fianl complexity ,order of (n)
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n / 2; i++) // its order of (n/2) ,,ignor constant ,, so order of(n)
    {
        cout << i << " ";
    }
    return 0;
}