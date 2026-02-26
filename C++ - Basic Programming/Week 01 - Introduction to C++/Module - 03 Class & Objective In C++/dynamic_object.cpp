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
int main()
{
    Student karim(10, 5, 3.99); // static object;
    cout << "static obj- " << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    Student *rahim = new Student(8, 10, 5.00); //dynamic object 
    cout << "heep obj- " << rahim->roll << " " << rahim->cls << " " << rahim->gpa << endl;
    return 0;
}