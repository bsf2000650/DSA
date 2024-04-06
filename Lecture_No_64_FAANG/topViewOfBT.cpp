#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> topView(Node *root){
    vector<int> ans;
    if(root == NULL)
        return ans;
    
    map<int,int> topNode;
    queue<pair<Node*, int> >  q;

    q.push(make_pair(root,0));

    while (!q.empty())
    {
        pair<Node*, int> temp = q.front();

        Node* frontNode = temp.first;
        int hd = temp.second;

        if(topNode.find(hd) == topNode.end())
            topNode[hd] = frontNode -> data;
        
        if(fronNode->left)
            q.push(make_pair(frontNode->data,hd-1));
        
        if(frontNode->right)
            q.push(make_pair(frontNode->data,hd+1));
    }

    for(auto i:topNode)
        ans.push_back(i.second);

    return ans;
    
}

int main(){

}