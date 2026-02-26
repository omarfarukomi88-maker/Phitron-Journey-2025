#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    // int n;
    // cin >> n;
    // // int ar[5];
    // Student ar[n];      //deaclare a class of array
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> ar[i].name >> ar[i].roll >> ar[i].marks;     //input accesing index then into object
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    // }

    // with space getline and ignor function using
    int n;
    cin >> n;
    // cin.ignore();
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, ar[i].name);
        cin >> ar[i].roll >> ar[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }
    return 0;
}