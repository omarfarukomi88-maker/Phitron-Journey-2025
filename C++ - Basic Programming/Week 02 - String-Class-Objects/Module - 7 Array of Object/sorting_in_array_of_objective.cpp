#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student l, Student r)
{
    // if (l.marks < r.marks) // assending marks
    //  if( l.marks > r.marks) //dissending marks
    // if(l.roll < r.roll) //assinding roll
    // if (l.roll > r.roll)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return l.marks < r.marks;
}
int main()
{
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
    }

    // sort(ar, ar + n);
    sort(ar, ar + n, cmp); // for sorting need custom compare function

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }
    return 0;
}