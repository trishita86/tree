class Solution {
public:
// time complexity =O(log n)
// space complexity=O(log n)
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root !=NULL && root->val !=val)
        {
            root=val<root->val?root->left:root->right;
        }
        return root;
    }
};
