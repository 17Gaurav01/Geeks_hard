class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        
        int n=V;
        
        vector<vector<pair<int,int>>>adj(n);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];
            adj[u].push_back({w,v});
            adj[v].push_back({w,u});
        }
        vector<int>dist(n,1e8);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,src});
        
        dist[src]=0;
        while(pq.size()){
            auto [d,u]=pq.top();
            pq.pop();
            if(d>dist[u]) continue;
            
            for(auto [w,v]:adj[u]){
                if(dist[v]>dist[u]+w){
                    dist[v]=dist[u]+w;
                    pq.push({dist[v],v});
                }
            }
            
        }
        
        return dist;
    }
};