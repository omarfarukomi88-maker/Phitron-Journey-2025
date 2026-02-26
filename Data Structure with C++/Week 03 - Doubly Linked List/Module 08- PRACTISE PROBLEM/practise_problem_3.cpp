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
void pelindom_list(Node *head, Node *tail)
{

    Node *tmp = head;
    Node *tmp1 = tail;
    int flag=0;
    int len = size_list(head);
    // cout << len << endl;
    for (int i = 0; i < len / 2; i++)
    {
        if(tmp->value!= tmp1->value)
        {
            flag=1;
            break;
        }
        tmp=tmp->next;
        tmp1=tmp1->prev;
    }

    if(flag==0)
    {
        cout << "YES";
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

    pelindom_list(head, tail);
    //print_list(head);

    return 0;
}