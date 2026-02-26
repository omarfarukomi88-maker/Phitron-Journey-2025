#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> l;
    int sz = 0;
    void push(int val)
    {
        sz++;
        l.push_back(val);
    }
    void pop()
    {
        sz--;
        l.pop_front();
    }
    int size()
    {
        return sz;
    }

    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty() == true;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}