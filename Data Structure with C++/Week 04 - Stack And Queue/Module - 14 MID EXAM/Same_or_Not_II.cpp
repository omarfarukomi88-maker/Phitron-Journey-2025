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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void push(int val)
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
    void s_pop()
    {
        Node *tmp = tail;
        tail = tail->prev;
        delete tmp;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    void q_pop()
    {
        Node *tmp = head;
        head = head->next;
        delete tmp;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int top()
    {
        return tail->value;
    }
    int front()
    {
        return head->value;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    int m, n;
    cin >> m >> n;
    if (m == n)
    {
        myStack st;
        myStack q;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        int flag = 0;
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                cout << "NO";
                flag = 1;
                break;
            }
            st.s_pop();
            q.q_pop();
        }
        if (flag == 0)
        {
            cout << "YES";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}