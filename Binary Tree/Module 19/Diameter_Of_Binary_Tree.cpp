int mx = 0;

int MaxHeight(TreeNode<int>* root)
{
    if(!root) return 0;
    int l = MaxHeight(root->left);
    int r = MaxHeight(root->right);
    int d = l+r;
    mx = max(mx,d);
    return max(l,r)+1;
}

int diameterOfBinaryTree(TreeNode<int> *root){
	mx = 0;
    int l = MaxHeight(root->left);
    int r = MaxHeight(root->right);
    return max((l+r),mx);
}