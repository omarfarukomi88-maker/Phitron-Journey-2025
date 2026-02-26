#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int a[n];
    // int b[n];
    vector<int> v(n);
    vector<int> v1(n);

    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> v1[i];
    }
    vector<int> v3;
    v3.insert(v3.begin(),v.begin(),v.end());
    v3.insert(v3.begin(),v1.begin(),v1.end());
    //vector<int> v;
    // v.insert(v.begin(),b,b+n);
    // v.insert(v.begin()+n,a,a+n);
    for(auto x:v3)
    {
        cout << x << " ";
    }
    
    
    return 0;
}