#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    bool visited[n];
    memset(visited, false, sizeof(visited));
    int level[n];
    memset(level, -1, sizeof(level));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    queue<int> q;
    q.push(0);
    visited[0] = true;
    level[0] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : adj_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
    int l;
    cin >> l;
    vector<int> lev;
    for(int i=0;i<n;i++)
    {
        if(level[i]==l)
            lev.push_back(i);
    }
    sort(lev.begin(),lev.end(),greater<int>());
    for(int x : lev)
    {
        cout << x << " ";
    }
    return 0;
}