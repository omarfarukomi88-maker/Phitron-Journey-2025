#include <bits/stdc++.h>
using namespace std;
int main()
{
    //pair<int,int> p;
    //p = make_pair(2025,2026);
    // p = {2020,2021};
    // cout << p.first << endl;
    // cout << p.second << endl;
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);

    for(int i=0;i<n;i++)
    {
        cin >> v[i].first >> v[i].second ;
    }
    for(int i=0;i<n;i++)
    {
        cout << v[i].first <<" " << v[i].second << endl ;
    }

    vector<pair<string,int>> vp;
    vp.push_back({"WellCome",2026});
    cout << vp.front().first << " " << vp.front().second;
    return 0;
}