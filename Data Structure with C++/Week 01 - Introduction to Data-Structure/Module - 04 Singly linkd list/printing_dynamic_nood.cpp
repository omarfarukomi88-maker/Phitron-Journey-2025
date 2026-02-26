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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    //_______its a lengthy process for printing________
    // cout << head->value <<endl;
    // cout << head->next->value <<endl;
    // cout << head->next->next->value <<endl;
    // cout << head->next->next->next->value <<endl;

    //_______by using head next time cannot access the node again _________
    // while (head != NULL)
    // {
    //     cout << head->value << endl;
    //     head = head->next;
    // }

    head->next = a;
    a->next = b;
    b->next = c;
    //________using  tmp pointer again can access the node ________
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
    //_______chacking again _____
    // tmp = head;
    // while (tmp != NULL)
    // {
    //     cout << tmp->value << endl;
    //     tmp = tmp->next;
    // }

    return 0;
}