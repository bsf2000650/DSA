#include<iostream>
#include<list>
#include<queue>

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // find all edges
    vector<int inDegree;
    for(auto i:adj){
        for(auto j: i.second)
            inDegree[j]++;
    }

    // 0 inDegree walo ko push krdo
    queue<int> q;
    for(int i = 0; i < v; i++)
    {
        if(inDegree[i] == 0)
            q.push(i);
    }

    // do bfs
    vector<int> ans;
    while(!q.front())
    {
        int front = q.front();
        q.pop();

        // ans store
        ans.push_back(front);

        // neighbour inDegree update
        for(auto neighbour: adj[front]){
            inDegree[neighbour]--;
            if(inDegree[neighbour] == 0)
                q.push(neighbour);
        }
    }

    return ans;
}