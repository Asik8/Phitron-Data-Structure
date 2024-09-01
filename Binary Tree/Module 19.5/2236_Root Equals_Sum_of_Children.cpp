class Solution {
public:
    bool checkTree(TreeNode* root) {
        int s1 = 0,s2=0;
        s1+= root->val;
        s2 += root->left->val; 
        s2 += root->right->val; 
        if(s1 == s2) return true;
        else return false;
    }
};