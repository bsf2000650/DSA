


pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // find key
    TreeNode *temp = root;
    int pred = -1;
    int succ = -1;

    while (temp->data != key)
    {
        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;
        }else{
            pred = temp->data;
            temp = temp->right;
        }
    }

    TreeNode *leftTree = temp->left;
    while(leftTree != NULL)
    {
        pred = leftTree->data;
        leftTree = leftTree->left;
    }

    TreeNode *rightTree = temp->right;
    while (rightTree != NULL)
    {
        succ = rightTree->datat;
        rightTree = rightTree->right;
    }

    return {pred,succ};  
    
}