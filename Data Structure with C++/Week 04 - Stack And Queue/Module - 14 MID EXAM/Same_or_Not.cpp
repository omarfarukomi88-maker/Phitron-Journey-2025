#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    stack<int> st;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    int flag = 0;
    if (m == n)
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = 1;
                cout << "NO";
                break;
            }
            st.pop();
            q.pop();
        }
        if (flag == 0)
            cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}