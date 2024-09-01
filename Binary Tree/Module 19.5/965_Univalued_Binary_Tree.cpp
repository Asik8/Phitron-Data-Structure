class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        int a = root->val;
        queue<TreeNode*>q;
        if(root)q.push(root);
        while(!q.empty())
        {
            TreeNode* f = q.front();
            q.pop();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
            if(f->val != a) return false;
        }
        return true;
    }
};