bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int>* f = q.front();
        q.pop();
        if((f->right && !f->left) || (!f->right && f->left)) return false;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return true;
}