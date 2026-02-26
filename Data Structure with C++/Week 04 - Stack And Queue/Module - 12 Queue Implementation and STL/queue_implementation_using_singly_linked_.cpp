#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node *next;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

class myQueue
{
    public:
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;
        void push(int val)
        {   sz++;
            Node* newnode=new Node(val);
            if(head==NULL)
            {
                head=newnode;
                tail=newnode;
                return;
            }
            tail->next=newnode;
            tail=newnode;
        }

        void pop()
        {
            sz--;
            Node *deleleNode=head;
            head=head->next;
            delete(deleleNode);
            if(head==NULL)
            {
                tail=NULL;
            }
        }

        int size()
        {
            return sz;
        }

        int front()
        {
            return head->value;
        }
        int back()
        {
            return tail->value;
        }
        bool empty()
        {
            return head==NULL;
        }

};

int main()
{
    
    return 0;
}