#include<iostream>
#include<queue>
using namespace std;

void inOrder(BinarTreeNode<int> *root, int &count){
    // base case
    if(root == NULL)
        return ;
    
    inOrder(root->left, count);
    if(root->left == NULL && root->right == NULL)
        count++;
    
    inOrder(root->right, count);
}

int noOfLeafNodes(BinarTreeNode<int> *root){
    int cnt = 0;
    inOrder(root, cnt);
    return cnt;
}

int main(){

}