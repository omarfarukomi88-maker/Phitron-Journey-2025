#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jersy;

    Cricketer(string country, int jersy)
    {
        this->country = country;
        this->jersy = jersy;
    }
};
int main()
{
    Cricketer *dhony = new Cricketer("India", 100);
    Cricketer *kohli = new Cricketer("India", 44);
    // kohli = dhony;

    // kohli->country=dhony->country;
    // kohli->jersy=kohli->jersy;

    *kohli = *dhony;

    // cout << dhony->country << " " << dhony->jersy << endl;
    // cout << kohli->country << " " << kohli->jersy << endl;

    delete dhony;
    cout << kohli->country << " " << kohli->jersy << endl;
    return 0;
}