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
    TreeNode* Convert(vector<int>v,int n,int l,int r)
    {
        if(l>r) return NULL;
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(v[mid]);
        TreeNode *LNode = Convert(v,n,l,mid-1);
        TreeNode *rNode = Convert(v,n,mid+1,r);
        if(LNode) root->left = LNode;
        if(rNode) root->right = rNode;
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& v) {
        return Convert(v,v.size(),0,v.size()-1);
    }
};