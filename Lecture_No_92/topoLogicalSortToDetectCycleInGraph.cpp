

int detectCycleInDirectedGraph(int n, vector< pair <int,int>> &edges){

    unordered_map<int, list<int> > adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first - 1;
        int v = edges[i].second - 1;
        adj[u].push_back(v);
    }

    // find all inDegrees
    vector<int> inDegree(n);
    for(auto i:adj){
        for(auto j: i.second){
            inDegree[j]++;
        }
    }

    // 0 degree walo ko push krdo
    queue<int> q;
    for(int i = 0; i < n; i++)
    {
        if(inDegree[i] == 0)
            q.push(i);
    }

    int cnt = 0;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        //inc count
        cnt++;

        //neighbour inDegree update
        for(auto neighbour: adj[front]){
            inDegree[neighbour]--;
            if(inDegree[neighbour]==0)
                q.push(neighbour);
        }
    }

    if(cnt == n)
        return false;
    else
        return true;    
}