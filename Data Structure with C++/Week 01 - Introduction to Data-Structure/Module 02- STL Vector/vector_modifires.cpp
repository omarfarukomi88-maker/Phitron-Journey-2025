#include <bits/stdc++.h>
using namespace std;
int main()
{
    // v= or v.assign()
            // vector<int> v={10,20,30,50,60,80,55};
            // vector<int> v2;
            // v2=v;
            // for(int i=0;i<v2.size();i++)
            // {
            //     cout << v2[i] << " ";
            // }
            // for(int x : v2) //shortcut for loop
            // {
            //     cout << x <<" ";
            // }
        //v.assign(size,value)
        // vector<int> v={10,20,30,50,60,80,55};
        // vector<int> v2;
        // //v2.assign(9,3);
        // v2.assign({10,20,30,50,40,404});
        // v2.assign(v.begin(),v.end());
        //    for(int x : v2)
        //     {
        //         cout << x <<" ";
        //     }

    //v.push_back()
            // vector<int>v;
            // v.push_back(101);
            // v.push_back(110);
            // v.push_back(401);
            // v.push_back(169);
            // for(int x: v)
            // {
            //     cout << x <<" ";
            // }
    
    //v.pop_back
            // vector<int> v={10,20,30,50,40,60,890,90,604,6030};
            // v.pop_back();
            // v.pop_back();
            // v.pop_back();
            // for(auto i : v)
            // {
            //     cout << i << " ";
            // }
    //v.insert(position,value)
        //     vector<int> v={10,20,30,40,50};
        //     vector <int> v2={101,1020,1030,1040};
        //     // v.insert(v.begin()+2,101);
        //    // v2.insert(v2.begin(),{10,20,30,3});
        //    v2.insert(v2.begin()+1,v.begin(),v.end());
        //     for(auto i : v2)
        //     {
        //         cout << i <<" ";
        //     }
    
    //v.erase(position,value)
               vector<int> v={10,20,30,40,50};
               for(auto i: v)
               {
                    cout << i <<" ";
               }
               cout << endl;
               //v.erase(v.begin(),v.end());
               //v.erase(v.begin()+1);
              // v.erase(v.begin()+1,v.begin()+4);
              v.erase(v.begin()+1,v.end()-1);
                for(auto i: v)
               {
                    cout << i <<" ";
               }
           
    return 0;
}