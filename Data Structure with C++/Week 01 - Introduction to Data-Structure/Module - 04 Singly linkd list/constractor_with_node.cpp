#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};
int main()
{
    Node a(101), b(202), c(303);

    a.next = &b;
    b.next = &c;
    
    cout << a.value << " " << a.next->value << " " << a.next->next->value<< endl;
    return 0;
}