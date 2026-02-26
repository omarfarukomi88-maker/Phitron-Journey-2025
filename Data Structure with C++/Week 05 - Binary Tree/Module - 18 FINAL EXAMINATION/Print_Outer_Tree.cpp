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
vector<int> v;
void outertree(Node *root)
{
    if (root == NULL)
        return;
    // if(root->left == NULL && root->right==NULL)
    //     return;
    if (root->left != NULL && root->right != NULL)
        outertree(root->left);
    if (root->left == NULL)
        outertree(root->right);
    if (root->right == NULL)
        outertree(root->left);
    v.push_back(root->value);
}

int main()
{
    Node *root = input_tree();

    if(root->left==NULL && root->right==NULL)
        {
            cout << root->value;
            return 0;
        }

    if (root->left == NULL && root->right != NULL)
    {
        // outer(root->right);
        Node *tmp = root;
        queue<Node *> q;
        q.push(tmp);
        while (!q.empty())
        {
            Node *p = q.front();
            q.pop();

            v.push_back(p->value);
            if (p->right)
                q.push(p->right);
            else if (p->left)
                q.push(p->left);
        }
    }

    if (root->left != NULL)
    {
        outertree(root);
        if (root->right != NULL)
        {
            // outer(root->right);
            Node *tmp = root->right;
            queue<Node *> q;
            q.push(tmp);
            while (!q.empty())
            {
                Node *p = q.front();
                q.pop();

                v.push_back(p->value);
                if (p->right)
                    q.push(p->right);
                else if (p->left)
                    q.push(p->left);
            }
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}