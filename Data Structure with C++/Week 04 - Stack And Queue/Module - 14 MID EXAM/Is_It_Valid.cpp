#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        queue<int> q;

        for (int x : s)
        {
            q.push(x);
        }
        if (q.size() % 2 == 0)
        {
            int zero = 0;
            int one = 0;
            while (!q.empty())
            {
                if (q.front() == '0')
                    zero++;
                else
                    one++;
                q.pop();
            }
            if (zero == one)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}