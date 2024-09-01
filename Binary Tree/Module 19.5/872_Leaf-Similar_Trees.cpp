class Solution {
public:
    vector<int>v1,v2;
    void PreOrder1(TreeNode * root)
    {
        if(root == NULL) return;
        if(!root->left && !root->right) v1.push_back(root->val);
        PreOrder1(root->left);
        PreOrder1(root->right);
    }
    void PreOrder2(TreeNode * root)
    {
        if(root == NULL) return;
        if(!root->left && !root->right) v2.push_back(root->val);
        PreOrder2(root->left);
        PreOrder2(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v1.clear();
        v2.clear();
        PreOrder1(root1);
        PreOrder2(root2);
        if(v1 == v2) return true;
        else return false;
    }
};