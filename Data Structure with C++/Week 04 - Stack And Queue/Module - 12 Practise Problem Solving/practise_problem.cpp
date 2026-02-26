#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    stack<int> s;
    queue<int> q2;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q2.push(s.top());
        s.pop();
    }

    while (!q2.empty())
    {
        cout << q2.front() << endl;
        q2.pop();
    }

    return 0;
}