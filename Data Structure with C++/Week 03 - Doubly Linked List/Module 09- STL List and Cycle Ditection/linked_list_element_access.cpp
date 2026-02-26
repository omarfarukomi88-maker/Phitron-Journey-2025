#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70};
    //cout << *l.begin() <<endl;
    //cout << l.front() <<endl;
    
    //cout << l.back() <<endl;

    cout << *next(l.begin(),3) <<endl;

    return 0;
}