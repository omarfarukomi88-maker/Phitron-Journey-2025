#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;                       //type 1    normaly decalre
    // vector<int> v(10);                  //type 2 fixed size vector
    // vector<int> v(10,-1);              //type 3 fixed size and value assign
    //  for(int i=0;i<v.size();i++)
    //  {
    //      cout << v[i] << " ";
    //  }
    int ar[5] = {1, 2, 3, 4, 5};
    // vector<int> v(ar,ar+5);              //type 4 copy an array in vector
    vector<int> v(5, -1);
    // vector<int> v2(v);                  // type 5    copy a vector with another vector
    vector<int> v2 = {10, 30, 50, 55, 11, 20, 50, 99}; // type 6    vrctor initialize manually
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    // cout << v.size() << endl;
    return 0;
}