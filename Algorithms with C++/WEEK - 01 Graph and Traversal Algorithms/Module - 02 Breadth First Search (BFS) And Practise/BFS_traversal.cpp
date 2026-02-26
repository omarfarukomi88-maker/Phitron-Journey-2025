#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visit[1005];
void BFS(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    while (!q.empty())
    {
        int parents = q.front();
        q.pop();

        cout << parents << " ";

        for (auto child : adj_list[parents])
        {
            if (visit[child] == false)
            {
                q.push(child);
                visit[child] = true;
            }
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
    memset(visit, false, sizeof(false));
    BFS(0);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     vector<int> adj_list[1005];
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }

//     bool visit[1005];
//     memset(visit, false, sizeof(false));
//     queue<int> q;
//     q.push(0);
//     visit[0] = true;
//     while (!q.empty())
//     {
//         int parents = q.front();
//         q.pop();

//         cout << parents << " ";

//         for (auto child : adj_list[parents])
//         {
//             if (visit[child] != true)
//             {
//                 q.push(child);
//                 visit[child] = true;
//             }
//         }
//     }
//     return 0;
// }