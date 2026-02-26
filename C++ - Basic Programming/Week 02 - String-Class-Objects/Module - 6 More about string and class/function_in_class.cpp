// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     int roll;
//     Student(string name, int roll)
//     {
//         this->name = name;
//         this->roll = roll;
//     }
//     void hi()
//     {
//         cout << "Hi and Hello " << name << endl;
//     }
// };
// int main()
// {
//     Student rakib("Rakib ahmed", 21);
//     rakib.hi();
//     cout << rakib.name << " " << rakib.roll << endl;
//     Student sakib("Sakib ahmed", 24);
//     sakib.hi();
//     cout << sakib.name << " " << sakib.roll << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    string cls;
    char sec;
    int math;
    int english;
    Student(string name, int roll, string cls, char sec, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->cls = cls;
        this->sec = sec;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "WELL-COME , i Am " << name << "\n"
             << " My class,Roll,section- " << cls << " " << roll << " "<< sec << "\n"
             << " My total marks - " << math + english << endl;
    }
};
int main()
{
    Student Rakib("Rakib Ahmed", 12, "Nine", 'B', 87, 90);
    Rakib.total();
    Student Sakib("Sakib Ahmed", 10, "Ten", 'A', 88, 99);
    Sakib.total();
    Student Aakib("Aakib Ahmed", 25, "Seven", 'C', 98, 95);
    Aakib.total();
    
    
    // cout << Rakib.name << " " << Rakib.roll << " " << Rakib.cls <<" " <<Rakib.sec <<" "
    // << Rakib.english << " " << Rakib.math <<endl;
    return 0;
}