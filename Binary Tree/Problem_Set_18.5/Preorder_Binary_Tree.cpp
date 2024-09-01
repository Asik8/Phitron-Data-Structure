vector<int> v;

void PreOrder(TreeNode<int> * root)
{
    if(root == NULL) return;
    v.push_back(root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}

vector<int> preOrder(TreeNode<int> * root){
    v.clear();
    PreOrder(root);
    return v;
}
