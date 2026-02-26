#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool visited [105];
int cnt=0;
void DFS(int src)
{
    // cout << src << " ";
    cnt++;
    visited[src]=true;
    for(int child : adj_list[src])
    {
        if(!visited[child])
        {
            DFS(child);
        }
    }
}
int main()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited,false,sizeof(visited));
    int node;
    cin >> node;
    DFS(node);
    cout << cnt;
    return 0;
}