#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // orfer of (n)
    {
        for (int j = 1; j <= n; j *= 2) // order of (log_N)__final order of (N_Log_N)
        {
            cout << "Hello Mr." << endl;
        }
    }
    return 0;
}