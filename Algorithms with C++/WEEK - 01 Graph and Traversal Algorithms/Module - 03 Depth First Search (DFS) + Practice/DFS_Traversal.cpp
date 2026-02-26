#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited [1005];
void DFS(int src)
{
    //base case
    // if(visited[src]==true)
    //     return;
    cout << src << " ";
    visited[src]=true;
    for(int child : adj_list[src])
    {
        if(visited[child]== false)
            DFS(child);
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
    DFS(0);
    return 0;
}