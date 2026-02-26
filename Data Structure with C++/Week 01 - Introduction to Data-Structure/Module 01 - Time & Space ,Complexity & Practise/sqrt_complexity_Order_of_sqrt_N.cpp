#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for(int i=1;i<=n;i++) //order of (n)
    // {
    //     if(n%i==0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    for(int i=1;i<=sqrt(n);i++) //order of sqrt of(n)__i<=sqrt(n)
    {
        if(n%i==0)
        {
            cout << i << " " << n/i << " ";
        }
    }

    for(int i=1;i*i<=n;i++) //order of sqrt(n)___i*i<=n
    {
        if(n%i==0)
        {
            cout << i << " ";
        }
    }
    return 0;
}