#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool visited[105];
int x =0;
void DFS(int src)
{
    x++;
    visited[src] = true;
    for (int child : adj_list[src])
    {
        if (!visited[child])
        {
            DFS(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    vector<int> cnt;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            DFS(i);
            cnt.push_back(x);
            x=0;
        }
    }
    sort(cnt.begin(),cnt.end());
    for(int c : cnt)
    {
        cout << c << " ";
    }
    return 0;
}