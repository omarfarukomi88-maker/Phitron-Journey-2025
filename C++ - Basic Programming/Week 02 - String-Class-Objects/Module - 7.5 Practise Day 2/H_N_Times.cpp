#include <bits/stdc++.h>
using namespace std;
void func(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        func(n, c);
        cout << endl;
    }

    return 0;
}