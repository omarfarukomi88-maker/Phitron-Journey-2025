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
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}
int size_list(Node *tmp)
{
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
    int size1 = 0;
    int size2 = 0;
    for (int i = 0; i < 2; i++)
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

        if (i == 0)
        {
            size1 = size_list(head);
        }
        else
        {
            size2 = size_list(head);
        }

        //  cout << size << endl;
        // print_list(head);
    }

    if (size1 == size2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}