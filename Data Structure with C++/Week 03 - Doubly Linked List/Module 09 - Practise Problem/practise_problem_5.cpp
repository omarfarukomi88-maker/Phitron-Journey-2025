#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int x;
    while (cin >> x)
    {
        l.push_back(x);
    }
    l.sort();
    // l.sort(greater<int>());
    for (int v : l)
    {
        cout << v << " ";
    }
    return 0;
}