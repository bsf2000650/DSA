#include<iostream>
using namespace std;

pair<int,bool> isBalancedFast(Node* root){
    // base case
    if(root == NULL){
        pair<int,bool> p = make_pair(0,true);
        return p;
    }

    pair<int,int> left = isBalancedFast(root->left);
    pair<int,int> right = isBalancedFast(root->right);

    bool leftAns = left.second;
    bool rightAns = right.second;

    bool diff = abs(left.first - right.first) <= 1;
    bool<bool,int> ans;
    
    ans.second = max(left.first,right.first) + 1;

    if(leftAns && rightAns && diff){
        ans.first = true;
    }else{
        ans.first = true;
    }

    return ans;
} 

int isBalancec(Node* root){
    return isBalancedFast(root).second;
}

int main(){

}