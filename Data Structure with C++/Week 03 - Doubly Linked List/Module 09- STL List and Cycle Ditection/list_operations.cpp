#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,30,40,20,50,40,40,10,50};

    // l.erase(next(l.begin(),2)); // it delete only with the index
    // l.remove(20); //remove the value

    // sort(l.begin(),l.end()); its dosent work in list

    // l.sort(); //sort list assending
    // l.sort(greater<int>()); // sort list disseanding

    // l.sort();
    // l.unique(); //male list uniqe value but list will be sorted


    // l.sort();
    l.reverse(); //reverse the list 

    for(auto it : l)
    {
        cout << it <<endl;
    }
    return 0;
}