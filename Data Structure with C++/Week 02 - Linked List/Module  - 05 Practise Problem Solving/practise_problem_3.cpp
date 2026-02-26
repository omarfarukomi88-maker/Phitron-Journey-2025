#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void count_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout <<"Size of list: " <<count << endl;
    Node *mp = head;
    if (count % 2 != 0)
    {
        int val = count / 2;
        for (int i = 1; i <= val; i++)
        {
            mp = mp->next;
        }
        cout << mp->value << endl;
    }
    else
    {

        int val = count / 2;
        for (int i = 1; i < val; i++)
        {
            mp = mp->next;
        }
        cout << mp->value << " " << mp->next->value << endl;
    }
}
int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    count_list(head);

    return 0;
}
