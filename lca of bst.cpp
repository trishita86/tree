class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root!=NULL)
        {
            int cur=root->val;
            if(cur<p->val && cur<q->val)
            return lowestCommonAncestor(root->right,p,q);
            else if(cur>p->val && cur>q->val)
            return lowestCommonAncestor(root->left,p,q);
            else
            return root;
        } 
        return root; 
    }
};
//time complexity=O(log n) or O(H),H=height of binary tree.
//space complexity=O(1)  
