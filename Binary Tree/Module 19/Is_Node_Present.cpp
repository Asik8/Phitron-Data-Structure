bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root->data == x) return true;
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        if(f->data == x) return true;
        q.pop();
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    return false;
}