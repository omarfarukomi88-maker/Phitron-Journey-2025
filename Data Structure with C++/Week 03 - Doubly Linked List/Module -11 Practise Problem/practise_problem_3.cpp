#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    stack<int> st1;
    int m;
    cin >> m;
    while (m--)
    {
        int z;
        cin >> z;
        st1.push(z);
    }
    if (n == m)
    {
        stack<int> ck;
        while (!st1.empty())
        {
            ck.push(st1.top());
            st1.pop();
        }
        int flag = 0;
        while (!st.empty())
        {
            if (st.top() != ck.top())
            {
                flag = 1;
                cout << "NO";
                break;
            }
            else
            {
                st.pop();
                ck.pop();
            }
        }
        if (flag == 0)
        {
            cout << "YES";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}