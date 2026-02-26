#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t ;
    while(t--)
    {
        int num_ppl,max_cap;
        cin >> num_ppl >> max_cap;
        if(num_ppl <= max_cap)
        {
            cout << "YES" <<endl;
        }
        else 
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}