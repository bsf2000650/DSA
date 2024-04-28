

int bellmanFord(int n, int m, int src, int dest, vector<vector<int>> &edges){

    vector<int> dist(n+1, 1e9);
    dist[src] = 0;

    // n+1
    for (int i = 0; i <= n; i++)
    {
        // traverse on edge list
        for (int j = 0; i < m; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];

            if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
                dist[v] = dist[u] + wt;
            }
        }
        
    }

    // check for negative cycle
    bool flag = 0;
    for (int j = 0; i < m; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];

            if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
                dist[v] = dist[u] + wt;
            }
        }
    
    if(flag == 0)
        return dist[dest];
    
    return -1;
}