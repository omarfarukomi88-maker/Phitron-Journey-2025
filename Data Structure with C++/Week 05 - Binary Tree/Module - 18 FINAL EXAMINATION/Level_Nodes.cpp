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
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void print_level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->value << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

void levelnode(Node *root, int i)
{
    vector<pair<Node*,int>> v;
    bool fre[10005] = {false};
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> parents = q.front();
        Node *p = parents.first;
        int level = parents.second;
        q.pop();
        v.push_back({p,level});
        if (p->left)
            q.push({p->left, level + 1});
        if (p->right)
            q.push({p->right, level + 1});
    }
int flag=0;
    for(auto x : v)
    {
        if(x.second == i)
        {
            flag=1;
            cout << x.first->value <<" ";
        }
       
    }
    if(flag == 0)
        cout << "Invalid";

}
int main()
{
    Node *root = input_tree();
    int l;
    cin >> l;
    levelnode(root, l);

    return 0;
}