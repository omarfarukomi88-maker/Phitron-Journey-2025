#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student fun() // function
{
    Student rahim(1, 9, 5.00); // object declare in function and return
    return rahim;
}
int main()
{
    Student obj = fun(); // return in main function store in obj
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}