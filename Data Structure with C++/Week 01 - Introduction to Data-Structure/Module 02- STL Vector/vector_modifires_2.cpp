#include <bits/stdc++.h>
using namespace std;
int main()
{
    //replace(strat point,end point,target number,reaplace by number)
            // vector<int> v={10,20,30,40,20,60,20};
            // //replace(v.begin(),v.end(),20,2025);
            // replace(v.begin(),v.end()-1,20,2025);
            // for(auto i: v)
            // {
            //     cout << i << " ";
            // }
    //find(start point , end point , serching value)
            vector<int> v={10,20,200,30,40,50,60,100};
            //vector<int> :: iterator it=find(v.begin(),v.end(),20);
           auto it= find(v.begin(),v.end(),20); //find function return an itrator its a pointer
           //cout << *it;
           if(it == v.end())
           {
                cout << " Not Found";
           }
           else 
           {
            cout << "Found";
           }
    return 0;
}