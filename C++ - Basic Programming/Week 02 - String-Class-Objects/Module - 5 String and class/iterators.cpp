#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "omar faruk omi";
    // for(int i=0;i<s.size();i++)
    // {
    //     cout << s[i] << endl;
    // }
    // cout << *s.begin() << endl;   //*s.begin() acces the first index
    // cout << *s.end() << endl;   // *s.end() access the last null index and both are pointer

    // for (string :: iterator it=s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}