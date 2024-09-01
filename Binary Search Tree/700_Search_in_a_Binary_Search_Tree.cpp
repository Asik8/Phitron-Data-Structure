/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *tmp = NULL;
    void BST(TreeNode* root,int val)
    {
        if(!root) return;
        if(root->val == val) 
        {
            tmp = root;
            return;
        }
        if(root->val > val) BST(root->left,val);
        if(root->val < val) BST(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        BST(root,val);
        return tmp;
    }
};