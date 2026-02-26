#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    list<int> l;
    while (t--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x > l.size())
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            l.insert(next(l.begin(), x), v);
        }

        for (int n : l)
        {
            cout << n << " ";
        }
        cout << endl;
        l.reverse();
        for (int n : l)
        {
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}