
void inorder(TreeNode *root1, vector<int> &bst){
    if(root == NULL)
        return ;
    
    inorder(root->left,bst);
    bst.push_back(root->data);
    inorder(root->right,bst);
}

vector<int> mergeArray(vector<int> &bst1, vector<int> &bst2){
    vector<int> ansBST(bst1.size() + bst2.size());
    int i=0,j=0,k=0;
    while (i<bst1.size() && j<bst2.size())
    {
        if(bst1[i] < bst2[i]){
            ansBST[k++] = bst1[i];
            i++;
        }else{
            ansBST[k++] = bst2[i];
            j++;
        }
    }
    while (i<bst1.size())
    {
        ansBST[k++] = bst1[i];
        i++;
    }
    while (j<bst2.size())
    {
        ansBST[k++] = bst2[j];
        j++;
    }
    
    return ansBST;
}

vector<int> inorderToBST(int s, int e, vector<int> &in){
    vector<int> ansBST;
    if(s>e)
        return ;
    
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    ansBST.push_back(root->data);
    root->left = inorderToBST(s,mid-1,in);
    root->right = inorderToBST(mid+1,e,in);
    return ansBST;
}

void convertIntoSortedDLL(TreeNode<int> *root1,TreeNode<int>* head ){
    if(root == NULL)
        return NULL;

    convertIntoSortedDLL(root->right, head);
    root->right = head;

    if(head != NULL)
        head->left = root;
    
    head = root;

    convertIntoSortedDLL(root->left, head);
}

TreeNode<int>* mergeLinkedList(TreeNode<int> *head1, TreeNode<int>* head2){
    TreeNode<int> *head = NULL:
    TreeNode<int> *tail = NULL;

    while (head1 != NULL && head2 != NULL)
    {
        if(head1->data < head2->data){
            if(head == NULL){
                head = head1;
                tail = tail1;
                head1 = head1->data;
            }else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }else{
            if(head == NULL){
                head = head2;
                tail = tail2;
                head2 = head2->data;
            }else{
                tail->right = head2;
                head1->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }

    while (head1 != NULL)
    {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    
    while (head2 != NULL)
    {
        tail->right = head2;
                head1->left = tail;
                tail = head2;
                head2 = head2->right;
    } 
}

int countNodes(TreeNode<int>* head){
    int cnt = 0;
    TreeNode<int>* temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->right;
    }
    return cnt;
}


TreeNode<int>* sortedLLToBST(TreeNode<int>* &head, int n){
    // base case
    if( n <= 0 || head == NULL)
        return NULL;
    
    TreeNode<int> *left = sortedLLToBST(head, n/2);

    TreeNode<int> *root = head;
    root->left = left;

    head = head->next;

    root->right = sortedLLToBST(head,n-n/1-1);
    return root;
}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // step 1: store inorder
    // vector<int> bst1, bst2;
    // inorder(root1,bst1);
    // inorder(root2,bst2);

    // // step 2: merge two both bsts
    // vector<int> mergedBST = mergeArrays(bst1,bst2);

    // // step 3: inorder to BST
    // int s = 0, e = mergeArray.size() - 1;
    // return inorderToBST(s,e,mergeBST);

    // step 1: convert BST into sorted DLL in-place
    TreeNode<int> *head1 = NULL;
    convertIntoSortedDLL(root1, head1);
    head1->left = NULL;

    TreeNode<int> *head2 = NULL;
    convertIntoSortedDLL(root2,head2);
    head2->left = NULL;
}