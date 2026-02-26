#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    // cin >> s;
    // cout << s << endl;
    // cin.getline(s,100); // char s[100]; then this will be use

    // cin >> s;
    cin.ignore();
    getline(cin, s); // string function input by this getline(cin,string_name);
    cout << n << endl
         << s << endl;
    return 0;
}