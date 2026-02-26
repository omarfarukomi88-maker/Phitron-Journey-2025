#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag=true;
    for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=false;
            cout << "NO" <<endl;
            return;
        }
    }
    if(flag=true)
    {
        cout << "YES" <<endl;
    }
    return 0;
}