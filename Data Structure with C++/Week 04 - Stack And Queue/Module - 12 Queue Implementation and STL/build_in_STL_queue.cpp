#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout << q.front() <<endl;
        q.pop();
    }
    return 0;
}