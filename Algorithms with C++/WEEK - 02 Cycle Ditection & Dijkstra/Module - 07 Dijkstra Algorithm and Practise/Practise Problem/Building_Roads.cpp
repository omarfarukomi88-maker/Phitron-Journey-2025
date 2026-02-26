#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
bool vis[100005];
void dfs(int src)
{
    vis[src]=true;

    for(int child : adj_list[src])
    {
        if(!vis[child])
        {
            dfs(child);
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
    memset(vis,false,sizeof(vis));
    vector<int> ans;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ans.push_back(i);   
        }
    }
    cout << ans.size()-1 << endl;
    for(int i=0;i<ans.size()-1;i++)
    {
        cout << ans[i] << " " << ans[i+1] << endl;
    }
    return 0;
}