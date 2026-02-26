#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int count = 0;
        char gun = 's';
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > d && gun == 's')
            {
                gun = 'l';
                count++;
            }
            else if (ar[i] <= d && gun == 'l')
            {
                gun = 's';
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}