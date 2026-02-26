#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool visited[105];
bool path_visit[105];
bool cycle;

void dfs(int src)
{
    visited[src]=true;
    path_visit[src]=true;
    for(int child: adj_list[src])
    {
        if(visited[child] && path_visit[child])
            cycle=true;
        if(!visited[child])
        {
            dfs(child);
        }
    }
    //return 
    path_visit[src]=false;
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
    }
    cycle=false; 
    memset(visited,false,sizeof(visited));
    memset(path_visit,false,sizeof(path_visit));
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            dfs(i);
        }
    }
    if(cycle)
        cout << "Detected Cycle";
    else
        cout << "Not Cycle";
    return 0;
}