#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    cout << s[2] << endl;      // s[] its index access
    cout << s.at(1) << endl;   // s.at() it also access the index
    cout << s.front() << endl; // s.front() access the first charecter
    cout << s.back() << endl;  // s.back() access the last charecter
    /// it can be use by this
    cout << s[s.size() - 1] << endl;

    int i = 0;
    while (i < s.size())
    {
        cout << s[i];
        i++;
    }

    return 0;
}