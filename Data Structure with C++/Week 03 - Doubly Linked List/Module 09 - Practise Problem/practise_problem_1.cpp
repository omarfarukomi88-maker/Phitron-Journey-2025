#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    while (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main()
{
    list<int> l;
    list<int> l2;
    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        l.push_back(x);
    }
    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        l2.push_back(x);
    }
    int s=max(l.size(),l2.size());
    int flag=0;
    for(int i=0 ;i<s;i++)
    {
        if(*next(l.begin(),i) != *next(l2.begin(),i))
        {
            //cout << next(l.begin(),i);
            flag =1;
            break;
        }
    }

    if(flag==1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}