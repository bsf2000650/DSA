

TreeNode *solve(vector<int> &preOrder, int mini, int maxi, int &i){
    // base case
    if(i > preOrder.size())
        return NULL;
    
    if(preOrder[i] < mini && preOrder[i] > maxi)
        return NULL;
    
    TreeNode *root = new TreeNode(preOrder[i++]);
    root->left = solve(preOrder,mini,root->data,i);
    root->right = solve(preOrder,root->data, maxi, i);
    return root;
}

TreeNode *preOrderTree(vector<int> &preOrder)
{
    int mini = INT_MIN;
    int maxi = __INT_MAX__;
    int i = 0;
    return solve(preOrder,mini,maxi,i)
}