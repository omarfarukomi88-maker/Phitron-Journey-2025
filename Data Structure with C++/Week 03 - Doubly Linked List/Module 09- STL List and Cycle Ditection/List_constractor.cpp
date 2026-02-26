#include <bits/stdc++.h>
using namespace std;
int main()
{
    //list<int> l; //deaclare list __behind the scane its a doubly linked list

    //list<int> l(10);// deaclare with fixed size

   // list<int> l(10,2025); // deaclare list with size and value

   //int ar[10]= {10,20,30,40,50,60,7,8,1025};
   //list <int> l(ar,ar+10); //copy array in list

//    list<int> x={100,200,300,400,500,600,20099};
//     list<int> l(x); //copy list in another list

vector<int> v={10,20,30,50,555};    
list<int> l(v.begin(),v.end()); //vectoy copy in list  

    //cout << l.size() <<endl; // print size of list

    // for(auto it =l.begin() ; it != l.end() ;it++)   // print with iterator using 
    // {
    //     cout << *it << endl;
    // }
    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}