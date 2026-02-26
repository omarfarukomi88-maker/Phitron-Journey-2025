#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{

    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}
int size_list(Node *&head)
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
void delete_node(Node *&head, Node *&tail, int val,int siz)
{
    int sz = siz;
    if(head==NULL)
    {
        head=NULL;
        tail=NULL;
    }
    else if (val == 0) //_____head
    {
        Node *tmp = head;
        head = head->next;
        delete (tmp);
    }

    else if (val == sz - 1) //_____tail
    {
        Node *tmp = head;
        for (int i = 1; i < val; i++)
        {
            tmp = tmp->next;
        }
        Node *delete_node = tmp->next;
        tmp->next = delete_node->next;
        delete (delete_node);
        tail = tmp;
    }
    else if(val <sz)
    {
        Node *tmp = head;
        for (int i = 1; i < val; i++)
        {
            tmp = tmp->next;
        }
        Node *delete_node = tmp->next;
        tmp->next = delete_node->next;
        delete (delete_node);
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {

        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
        }
        else if (x == 2)
        {
            int sz = size_list(head);
            delete_node(head, tail, v,sz);
        }

        print_list(head);
        cout << endl;
    }

    return 0;
}