#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int size()
    {
        return v.size();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    myStack st1;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    if (st.size() == st1.size())
    {
        int falg=0;
        while (!st.empty())
        {
            if (st.top() != st1.top())
            {
                falg=1;
                cout << "NO";
                break;
            }
            st.pop();
            st1.pop();
        }

        if(falg==0)
            cout << "YES";
    }

    else
        cout << "NO";

    return 0;
}