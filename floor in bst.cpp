int floorInBST(TreeNode<int> * root, int X)
{
    int floor=-1;
    while(root!=NULL)
    {
        if(root->val==X)
        {
            floor=root->val;
            return floor;
        }
        else if(root->val<X)
        {
            floor=root->val;
            root=root->right;
        }
        else
        root=root->left;
    }
    return floor;
}
