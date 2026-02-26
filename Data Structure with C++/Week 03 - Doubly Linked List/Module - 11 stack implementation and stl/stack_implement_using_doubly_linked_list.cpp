#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *pev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->pev = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->pev = tail;
        tail = newnode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->pev;
        delete (deleteNode);
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myStack st;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}