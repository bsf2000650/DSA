#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<stack>
using namespace std;
template <typename T>

class graph{
    public:
        unordered_map<T, list<T> > adj;

        void addEdge(T v, T u, bool direction){
            //direction = 0 -> undirected
            //direction = 1 -> directed
            
            // create an edge from u to v
            adj[u].push_back(v);
            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i:adj){
                cout << i.first << "-> ";
                for(auto j: i.second) {
                    cout << j << ", ";
                }
                cout << endl;
            }
        }

};


void dfs(int node, unordered_map<int,bool> &vis, stack<int> &s, unordered_map<int, list<int,int>> &adj){
    vis[node] = true;
    for(auto nbr: adj[node]){
        if(!vis[nbr]){
            dfs(nbr,vis,s,adj);
        }
    }
    // topo logic
    s.push(node);
}

void revDfs(int node, unordered_map<int,bool> &vis, unordered_map<int, list<int,int>> &adj){
    vis[node] = true;
    for(auto nbr: adj[node]){
        if(!vis[nbr])
            revDfs(nbr,vis,adj);
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges){
    // create adjacency list
    unordered_map<int, list<int,int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // topological sort
    stack<int> s;
    unordered_map<int,bool> vis;
    for (int i = 0; i < v; i++)
    {
        if(!vis[i])
            dfs(i,vis,s,adj);
    }
    
    // create a transpose graph
    unordered_map<int, list<int,int> > transpose;
    for (int i = 0; i < v; i++)
    {
        vis[i] = 0;
        for(auto nbr: adj[i]){
            transpose[nbr].push_back(i);
        }
    }

    // dfs call using above ordering
    int count = 0;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        if(!vis[top]){
            count++;
            revDfs(top,vis,transpose);
        }
    }

    return count;
}


int main(){
    int n, m;
    cout << "Something ---" << endl;
    cout << "Enter number of nodes -> ";
    cin >> n;

    cout << endl << "Enter number of edges -> ";
    cin >> m;

    graph<int> g;

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        // creating an undirected graph
        g.addEdge(u,v,1);

    }

}