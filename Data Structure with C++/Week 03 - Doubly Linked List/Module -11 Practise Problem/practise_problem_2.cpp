#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    stack<int> up;
    while(!st.empty())
    {
        up.push(st.top());
        st.pop();
    }
    while(!up.empty())
    {
        cout << up.top() <<" ";
        up.pop();
    }
    return 0;
}