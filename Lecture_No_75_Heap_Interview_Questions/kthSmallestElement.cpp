

int kthSmallest(int arr[], int l, int r, int k) {
    // step1:
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    // step2:
    for (int i = k; i <=r; i++)
    {
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    // step3:
    int ans = pq.top();
    return ans;
}