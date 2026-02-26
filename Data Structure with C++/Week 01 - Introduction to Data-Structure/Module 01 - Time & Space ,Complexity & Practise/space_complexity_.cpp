#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];                  // space_complexity__order of(n)
    int ar[n][n];               // space_complexity__Order Of(N*N)
    int sum = 0;                // order of (1)
    for (int i = 0; i < n; i++) // time_complexity_order_of(n)
    {
        cin >> ar[i];
        // sum+=i;
    }
    return 0;
}