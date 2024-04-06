
void solve(Node* root, int sum, int len, int &maxLen, int &maxSum){
    // base
    if(root == NULL){
        if(len > maxLen){
            maxLen = len;
            maxSum = sum;
        }
        else if(len == maxLen)
            maxSum = max(sum,maxSum);
        
        return; 
    }
    solve(root->left,sum,len+1,maxLen, maxSum);
    sovle(root->right,sum,len+2,maxLen,maxSum);
}

int sumOfLongestRootToLeafNode(Node* root){

    int len = 0;
    int maxLen = 0;

    int sum = 0;
    int maxSum = -1;

    solve(root,sum,len,maxLen,maxSum);

    return sum;

}