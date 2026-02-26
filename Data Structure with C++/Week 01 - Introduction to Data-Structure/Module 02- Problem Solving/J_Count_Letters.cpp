#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.size();
    vector<int> v(26, 0);
    for (int i = 0; i < l; i++)
    {
        v[s[i] - 'a']++;
    }
    sort (s.begin(),s.end());
    for (int i = 0; i < 26; i++)
    {
        if (v[i] != 0)
        {
            char let = 'a' + i;
            cout << let << " : " << v[i] << endl;
        }
    }
    return 0;
}
