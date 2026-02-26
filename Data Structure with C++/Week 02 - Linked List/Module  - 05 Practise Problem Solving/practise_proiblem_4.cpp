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
void chack_value(Node *head)
{
    Node *tmp = head;
    Node *mp = tmp->next;
    int flag = 0;
    while (mp != NULL)
    {
        while (mp != NULL)
        {
            if (tmp->value > mp->value)
            {
                flag = 1;
                break;
            }
            mp = mp->next;
        }

        tmp = tmp->next;
        mp = tmp->next;
    }
    if (flag == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
int main()
{
    Node *head = new Node(1);
    Node *a = new Node(5);
    Node *b = new Node(6);
    Node *c = new Node(8);
    Node *d = new Node(9);
    Node *e = new Node(10);
    //  Node *head = new Node(2);
    //  Node *a = new Node(4);
    //  Node *b = new Node(6);
    //  Node *c = new Node(5);
    //  Node *d = new Node(8);
    //  Node *e = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    chack_value(head);
    return 0;
}
