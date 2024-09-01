class Solution {
public:
    void InOrder(TreeNode* root,int &tilt)
    {
        if(!root) return;
        InOrder(root->left,tilt);
        tilt+= root->val;
        InOrder(root->right,tilt);
    }

    int solve(TreeNode* root)
    {
        if(!root) return 0;
        if(!root->left && !root->right)
        {
            int x = root->val;
            root->val = 0;
            return x;
        }
        int l = solve(root->left);
        int r = solve(root->right);
        int c = root->val;
        root->val = abs(l-r);
        return c+l+r;
    }

    int findTilt(TreeNode* root) {
        int tilt = 0;
        solve(root);
        InOrder(root,tilt);
        return tilt;
    }   
};