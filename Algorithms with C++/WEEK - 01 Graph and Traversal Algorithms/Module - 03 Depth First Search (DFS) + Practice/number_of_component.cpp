#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool visited[105];
void DFS(int src)
{
    // cout << src << " ";
    visited[src]=true;
    for(int child : adj_list[src])
    {
        if(visited[child] ==false)
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
    memset(visited,false,sizeof(visited));
    int count =0;
    for(int i=0;i<n ;i++)
    {
        if(visited[i]==false)
        {
            DFS(i);
            count++;
            //cout << endl;
        }
    }
    cout << "componet no - " << count << endl;
    return 0;
}