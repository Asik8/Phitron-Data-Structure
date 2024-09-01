class Solution {
public:
    vector<int>v1,v2;
    int i=0;
    void Level_Order(TreeNode* root)
    {
        vector <int> v;
        queue<TreeNode*>q;
        if(root) q.push(root);
        while(!q.empty())
        {
            TreeNode * f = q.front();
            q.pop();
            if(!f)
            {
                v.push_back(10000);
                continue;
            }
            v.push_back(f->val);
            q.push(f->left);
            q.push(f->right);
        }
        if(i==0) v1 = v;
        else v2 = v;
        i++;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        v1.clear();
        v2.clear();
        Level_Order(p);
        Level_Order(q);
        if(v1 == v2) return true;
        else return false;
    }
};