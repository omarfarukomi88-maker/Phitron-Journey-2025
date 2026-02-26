#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {12, 115, 225, 123, 150};
    // cout << l.size() << endl;   //print size of linked list
    
    // cout <<l.max_size() <<endl; //print the maximum size of list
    
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }
    
    //l.clear(); // clear the list
    
    cout << l.size() << endl;
    
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }
    
    if (l.empty())
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }

    //l.resize(10);   //resize the list
   // l.resize(2);   //resize the list
    l.resize(10,2026);   //resize the list
    
    cout << "after resize " <<l.size() << endl;
    
    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}