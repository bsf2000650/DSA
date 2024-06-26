
void buildMinHeap(vector<int> &arr, int n, int i){
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[smallest] > arr[i])
        smallest = left;
    
    if(right < n && arr[smallest] > arr[i])
        smallest = right;
    
    if(smallest != i){
        swap(arr[smallest],arr[i]);
        buildMinHeap(arr,n,smallest);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n/2-1; i >= 0; i--)
    {
        buildMinHeap(arr,n,i)
    }
    return arr;
}