int findCeil(BinaryTreeNode<int> *node, int x){
    int ceil=-1;
    while(node!=NULL)
    {
        if(node->data==x)
        {
            ceil=node->data;
            return ceil;
        }
        else if(node->data<x)
        node=node->right;
        else {
          ceil = node->data;
          node = node->left;
        }
    }
        return ceil;
}
