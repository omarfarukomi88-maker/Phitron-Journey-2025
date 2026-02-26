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
    int flag=0;
    for (int i = 0,j=n-1; i < n/2; i++,j--)
    {
        if(a[i]!=a[j])
        {
            flag=1;
            cout << "NO";
            break;
        }
    }
    if(flag==0)
    {
        cout << "YES";
    }
    return 0;
}