#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        // 1- queue theke node ta ber kore niye ashvo
        Node *p = q.front();
        q.pop();
        // 2- input er kaj korbo
        int l, r;
        cin >> l >> r;
        Node *MyLeft, *Myright;
        if (l == -1)
            MyLeft = NULL;
        else
            MyLeft = new Node(l);
        if (r == -1)
            Myright = NULL;
        else
            Myright = new Node(r);

        p->left=MyLeft;
        p->right=Myright;

        // 3-left and right push kovo
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int count_nodes(Node * root)
{
    if(root == NULL)
        return 0;
    int l= count_nodes(root->left);
    int r= count_nodes(root->right);
    return l+r+1;
}
int main()
{
    Node *root = input_tree();
    int count=count_nodes(root);
    cout << count;
    return 0;
}