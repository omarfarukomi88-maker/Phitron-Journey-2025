#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string sec;
    int id;
    int math;
    int english;
};
bool cmp(Student l, Student r)
{
    if (l.english == r.english)
    {

        if (l.math == r.math)
        {
            return l.id < r.id;
        }
        else
        {
            return l.math > r.math;
        }
    }
    else
    {
        return l.english > r.english;
    }
}
int main()
{
    int n;
    cin >> n;
    Student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].sec >> ar[i].id >> ar[i].math >> ar[i].english;
    }
    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].cls << " " << ar[i].sec << " " << ar[i].id << " " << ar[i].math << " " << ar[i].english << endl;
    }
    return 0;
}