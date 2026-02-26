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
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
    }

    //int mn=INT_MAX;   // 

    Student mn;
    mn.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // mn=min(ar[i].marks,mn);  //
        // mn.marks=min(ar[i].marks,mn.marks);  //
        if (ar[i].marks < mn.marks)
        {
            mn = ar[i];
        }
    }
    cout <<"min marks-" << mn.name << " " << mn.roll << " " << mn.marks << endl;

    Student mx;
    mx.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (ar[i].marks > mx.marks)
        {
            mx = ar[i];
        }
    }
    cout <<"max marks-"<< mx.name << " " << mx.roll << " " << mx.marks << endl;

    Student min_roll;
    min_roll.roll = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (ar[i].roll < min_roll.roll)
        {
            min_roll = ar[i];
        }
    }
    cout <<"min roll-"<< min_roll.name << " " << min_roll.roll << " "<< min_roll.marks << endl;
    Student max_roll;
    max_roll.roll = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (ar[i].roll > max_roll.roll)
        {
            max_roll = ar[i];
        }
    }
    cout <<"max roll-"<< max_roll.name << " " << max_roll.roll << " "<< max_roll.marks << endl;

    return 0;
}