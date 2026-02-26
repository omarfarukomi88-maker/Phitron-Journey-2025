/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    queue<BinaryTreeNode<int>*> q;
    if(root == NULL)
        return false;
    else
        q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int> *p =q.front();
        q.pop();

        if(p->data == x)
            return true;
        
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);

    }

    return false;
}