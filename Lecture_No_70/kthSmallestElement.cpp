
int solve(TreeNode<int> *root, int &i, int k){
    // base case
    if(root == NULL)
        return NULL;

    // Left Part
    int left = solve(root->left,i,k);

    if(left != -1)
        return left;
    
    // Node
    i++;
    if(i==k)
        return root->data;
    
    // Right Part
    return solve(root->right,i,k);
}

int kthSmallest(TreeNode<int> *root, int k)
{
    int i = 0;
    int ans = solve(root,i,k);
    return ans;
}