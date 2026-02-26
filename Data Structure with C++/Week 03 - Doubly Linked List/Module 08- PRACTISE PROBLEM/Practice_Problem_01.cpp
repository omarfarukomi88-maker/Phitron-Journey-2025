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
void cmp(Node *head, Node *h)
{
    Node *tm1 = head;
    Node *tm2 = h;
    int flag = 0;
    int len1 = size_list(head);
    int len2 = size_list(h);
    if (len1 == len2)
    {
        while (tm1 != NULL)
        {
            if (tm1->value != tm2->value)
            {
                flag = 1;
                break;
            }
            tm1 = tm1->next;
            tm2 = tm2->next;
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
    else
    {
        cout << "NO";
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
    Node *h = NULL;
    Node *t = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insesrt_tail(h, t, v);
    }

    cmp(head, h);

    return 0;
}