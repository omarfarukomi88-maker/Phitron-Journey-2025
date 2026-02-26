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
void print_list(Node *head, Node *tail)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;

    Node *tmp1 = tail;
    while (tmp1 != NULL)
    {
        cout << tmp1->value << " ";
        tmp1 = tmp1->prev;
    }
    cout << endl;
}
void insesrt_tail(Node *&head, Node *&tail, int idx, int val, int sz)
{
    Node *newnode = new Node(val);

    if (idx == 0) // head
    {
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        // Node *tmp=head;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    else if (sz == idx) // tail
    {
        Node *tmp = tail;
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    else // anyposition
    {
        Node *tmp = head;
        for (int i = 1; i < idx; i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        tmp->next->prev = newnode;
        tmp->next = newnode;
        newnode->prev = tmp;
    }
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
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int idx, val;
        cin >> idx >> val;
        int sz = size_list(head);
        if (idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insesrt_tail(head, tail, idx, val, sz);
            print_list(head, tail);
        }
    }

    return 0;
}