#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i *= 2) // increment multiple or division wise then comlexity Order of(log N)
    {                               // Order Of (log 2 base N)
        cout << i << endl;
    }

    for (int i = 1; i <= n; i++) // order of(N)
    {
        cout << i << " ";
        i *= 2; // order of(Log N)
    }


    cout << endl;

    
    int k = 2;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        i *= k; // order of (Log k base N)
    }
    return 0;
}