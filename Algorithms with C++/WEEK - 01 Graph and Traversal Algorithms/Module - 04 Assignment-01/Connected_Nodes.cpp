#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];

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

    int q;
    cin >> q;
    while (q--)
    {
        vector<int> ans;
        int x;
        cin >> x;
        if (!adj_list[x].empty())
        {
            for (int c : adj_list[x])
            {
                ans.push_back(c);
            }
            sort(ans.begin(), ans.end(), greater<int>());
            for (int val : ans)
            {
                cout << val << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}