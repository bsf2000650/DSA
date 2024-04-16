#include<queue>
#include<limits>
class node{
    public:
        int data;
        int col;
        int row;

        node(int d, int c, int r){
            data = d;
            col = c;
            row = r;
        }
};

class compare{
    public:
        bool operator()(node* a, node* b){
            return a->data > b->data;
        }
};

int kSorted(vector<vector<int>> &a, int k, int n) {

    int mini = __INT_MAX__, maxi = INT_MIN;
    priority_queue<node, vector<node>, compare > minHeap;

    for (int i = 0; i < k; i++)
    {
        int element = a[i][0];
        mini = min(mini,element);
        maxi = max(maxi,element);
        minHeap.push(new node(element,i,0));
    }

    int start = mini, end = maxi;

    while (!minHeap.empty())
    {

        node* top = minHeap.top();
        minHeap.pop();
        
        mini = temp->data;

        if(maxi-mini < end-start){
            start = mini;
            end = maxi;
        }

        if(temp->col + 1 < n){
            maxi = max(maxi, a[temp->row][temp->col+1]);
            minHeap.push(new node(a[temp->row][temp->col+1],temp->row,temp->col+1));
        }else{
            break;
        }
    }

    return (end-start+1);
}