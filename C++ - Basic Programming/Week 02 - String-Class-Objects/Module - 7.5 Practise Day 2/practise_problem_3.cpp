#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string x;
    cin >> x;
int count =0;
    stringstream ss(s);
    string ck;
    while (ss >> ck)
    {
        if(ck == x)
        {
            count ++;
        }
    }
    cout << count;
    return 0;
}