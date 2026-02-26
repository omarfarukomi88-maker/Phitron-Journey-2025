#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "omar faruk omi";
    cout << s.size() << endl;     // s.size() return string size
    cout << s.max_size() << endl; // s.max_size() return string holding maximum size
    cout << s.capacity() << endl; // s.capacity() return string available capacity
 
    //s.clear(); //clear the string 
   if (s.empty() == true) //chack the string is empty or not
   //if(s.size()==0) its work like  s.empty() function
   {
        cout << "Empty" << endl;
    }
    else
    {
        cout << " Not Empty" << endl;
    }
    cout << s << endl;
    //s.resize(5);
    s.resize(20,'x'); //resize the string and adding any charecter and also remove
    cout << s << endl;

    s.clear();
    cout << s.size() << endl;

    return 0;
}