#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 20, 60, 20,80,90};
    //list<int> l2(l); //assign another linked in another list
    // list<int>l2(l);
    // l2=l;//assign another linked in another list
    //l2.assign(l.begin(),l.end());
    
    // l2.push_back(999); //insert value at tail
    // l2.push_back(2025); 
    // l2.push_front(999);//insert value at head
    // l2.push_front(2025);


    //l2.pop_back();//delete at tail
    //l2.pop_back();
   // l2.pop_front();//delete at head
    //l2.pop_front();
    

    //cout << *next(l2.begin(),3) << endl;    // accces the element
    
    
    //l2.insert(next(l2.begin(),3),2025);   // insesrt in any position in list
    
    // vector<int> v={1,2,3,4,5};
    // l2.insert(next(l2.begin(),3),v.begin(),v.end()); //insert from vector

    // list<int> x={100,200,600};
    // l2.insert(next(l2.begin(),3),x.begin(),x.end()); //insert from another link list
    
    // l.erase(next(l.begin(),3),next(l.begin(),6)); //erase multiple value
    // l.erase(next(l.begin(),3)); //erase single value

    // replace(l.begin(),l.end(),20,2026); //replace from begin to last and chack and then replace that
    // replace(l.begin(),l.end(),20,2026);

    auto it=find(l.begin(),l.end(),100);    // find the value from begin to end

    if(it==l.end())
    {
        cout << "Not Found"<<endl;
    }
    else
    {
        cout << "Found" <<endl;
    }


    for (int val : l)
    {
        cout << val << endl;
    }
    
    return 0;
}