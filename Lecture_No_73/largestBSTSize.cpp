
class info{
    public:
        int maxi;
        int mini;
        bool isBST;
        int size;
};

info size(TreeNode * root, int &ans){
    // base case
    if(root == NULL)
        return {INT_MIN,INT_MAX,true,0};
    
    int left = solve(root->left,ans);
    int right = solve(root->right,ans);

    info currNode;

    currNode.size = left.size + right.size + 1;
    currNode.maxi = (root->data,right.maxi);
    currNode.mini = (root->data,right.mini);

    if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)){
        currNode.isBST = true;
    }else{
        currNode.isBST = false;
    }

    if(currNode.isBST){
        ans = max(ans, currNode.size);
    }

    return currNode;
}


int largestBST(TreeNode * root){
    int maxSize = 0;
    info temp = solve(root,maxSize);
    return maxSize;
}