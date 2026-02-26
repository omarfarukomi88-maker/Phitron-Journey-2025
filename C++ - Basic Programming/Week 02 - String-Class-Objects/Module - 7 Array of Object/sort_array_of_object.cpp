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
    // if (l.marks < r.marks)
    // {
    //     return true;
    // }
    // else if (l.marks > r.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     if (l.roll < r.roll)
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

    if (l.marks == r.marks)
    {
        return l.roll < r.roll;
    }
    else
    {
        return l.marks < r.marks;
    }
   
  //  return l.marks == r.marks ? l.roll < r.roll : l.marks < r.marks ; //with tarnary operator

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
    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }
    return 0;
}