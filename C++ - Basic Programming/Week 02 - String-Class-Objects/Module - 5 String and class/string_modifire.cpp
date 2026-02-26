#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "omar faruk";
    //string s2 = " omi";
    // s += s2;           // add two string in one
    // s.append(s2);      // add two string in one
    // s += " Boss";      // ad another string char like this
    // s.push_back('A');  // add any char at the last index
    // s.pop_back();      // remove last charecter at the last index
    // s[s.size()] = 'x'; // accessing index this string cannot expand we can change into the aize
    //cout << s << endl;
   // s = "i am omar faruk" + s2 + " 2025"; // '=' its can assign any string
   // s = s2;                               // assign another string string
   // s.assign("umar faruk");               // assign a string in the other string
    //s.erase(4, 4);                        // s.erase(x,y) from x th index dellet and y how many char want to dellet
    s.replace(0, 4, "Umar");              // realpace 0th index from 4 char and add string
    s.replace(4, 0, " AL ");               // can add without reaolace
    //s.insert(4, " al ");                    // insert a string exat number index
    cout << s << endl;
}