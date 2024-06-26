
void inorder(reeNode < int > * root, vector<int> &inorderVal){
    if(root == NULL)
        return ;
    
    inorder(root->left,inorderVal);
    inorderVal.push_back(root->data);
    inorder(root->right,inorderVal);
}

bool kSumPair(TreeNode < int > * root, int k) {
   vector<int> inorderVal;
   inorder(root,inorderVal);

   int i=0 , j = inorderVal.size() - 1;
   while (i<j)
   {
        int sum = inorderVal[i] + inorderVal[j];
        if(sum == k)
            return true;
        else if(sum > k)
            j--;
        else
            i++;
   }
   return false;
}