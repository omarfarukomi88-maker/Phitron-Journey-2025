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
    // if(!st.empty())
    //     st.top();
    // if(!st.empty())
    //     st.pop();

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}