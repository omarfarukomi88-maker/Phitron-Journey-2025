#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + n); // assending sorting

    // sort(a+1, a+n-1); // we can also change the start and ending point

    // sort(a, a + n, greater<int>()); // dissending sorting

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}