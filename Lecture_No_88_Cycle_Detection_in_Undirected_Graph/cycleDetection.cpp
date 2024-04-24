
bool isCycleBFS(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int > > &adj){

    unordered_map<int,int> parent;
    parent[src] = -1;
    visited[src] = 1;
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for(auto neighbour: adj[front]){
            if(visited[neighbour] == true && neighbour != parent[front]){
                return true;
            }else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = 1;
                parent[neighbour] = front;
            }
        }
    }
    return false;
}

bool isCyclicDFS(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int > > &adj){
    visited[node] = true;
    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            bool isCycleDetected = isCycleDFS(neighbour,node,visited,ajd);
            if(isCycleDetected)
                return true;
        }
        else if(neighbour != parent)
            return true;
    }
}

string cycleDetection(vector<vector<int>> &edges, int n, int m){
    unordered_map<int, list<int > > adj;
    // creaing adjacency list
    for(int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // to handle disconnected graphs
    unordered_map<int, bool> visited;

    for(int i = 0; i < n; i++)
    {
        if(!visited[i]){
            // bool ans = isCycleBFS(i, visited, adj);
            bool ans = isCycleDFS(i, -1, visited, adj);
            if(ans == i)
                return "Yes";
        }
        return "No";
    }
}