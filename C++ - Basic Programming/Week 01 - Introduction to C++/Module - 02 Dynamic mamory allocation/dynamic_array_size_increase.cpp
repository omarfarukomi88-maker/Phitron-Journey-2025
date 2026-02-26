#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a[3];   //static array
    int *a = new int[3]; // dynamic  array
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int b[5]; // increase array size
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = 400; // add more value
    b[4] = 500;

   delete[] a; //dellet  dynamic array 

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    // for (int i = 0; i < 3; i++)  // after the dellet dynamic array 
    // {
    //     cout << endl << a[i];
    // }
    return 0;
}