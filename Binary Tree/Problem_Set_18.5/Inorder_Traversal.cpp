vector<int> v;

void InOrder(TreeNode *root)
{
    if(root == NULL) return;
    InOrder(root->left);
    v.push_back(root->data);
    InOrder(root->right);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    v.clear();
    InOrder(root);
    return v;
}