#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}
void insesrt_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int size_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void sort_list(Node *head)
{
    Node *t = head;

    while (t->next != NULL)
    {
        Node *t2 = t->next;
        while (t2 != NULL)
        {
            if (t->value > t2->value)
            {
                swap(t->value, t2->value);
            }
            t2 = t2->next;
        }
        t = t->next;
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insesrt_tail(head, tail, val);
    }

    sort_list(head);
    print_list(head);

    return 0;
}