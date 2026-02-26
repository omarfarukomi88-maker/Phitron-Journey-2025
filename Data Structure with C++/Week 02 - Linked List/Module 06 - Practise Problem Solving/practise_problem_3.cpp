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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_maximum(Node *head)
{
    Node *tmp=head;
    int max=INT_MIN;
    while(tmp!=NULL)
    {
        if(max <tmp->value)
        {
            max=tmp->value;
        }
        tmp=tmp->next;
    }

    cout << max <<endl;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_tail(head, tail, x);
    }

    print_maximum(head);

    return 0;
}