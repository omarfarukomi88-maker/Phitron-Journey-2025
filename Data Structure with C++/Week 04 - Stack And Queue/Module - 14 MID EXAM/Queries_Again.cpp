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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next=head;
    head = newnode;
}
void insert_position(Node *head, Node *tail, int idx, int val)
{
    Node *tmp=head;
    Node *newnode = new Node(val);

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}
int size(Node *head)
{
    Node *tmp=head;
    int sz = 0;
    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}
void print_list(Node *head)
{
    Node*tmp=head;
    cout << "L -> ";
    while(tmp!= NULL)
    {
        cout << tmp->value << " ";
        tmp=tmp->next;
    }
}
void reverse_print(Node *tail)
{
    Node *tmp=tail;
     cout << "R -> ";
    while(tmp!=NULL)
    {
        cout << tmp->value <<" ";
        tmp=tmp->prev;
    }
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
        int sz=size(head);
    
        if (idx <= sz)
        {
            if(idx ==0)
            {
                insert_head(head,tail,val);
            }
            else if(idx == sz)
            {
                insert_tail(head,tail,val);
            }
            else
            {
                insert_position(head,tail,idx,val);
            }

            print_list(head);
            cout << endl;
            reverse_print(tail);
            cout << endl;
        }
        else
        {
            cout << "Invalid" <<endl;;
        }

    }
    return 0;
}