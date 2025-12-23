class Solution {
  public:
  vector<vector<int >> adj;
  vector<int>vis;
  int dfs(int u , int p){
      vis[u] = true;
      for(auto x:adj[u]){
          if(!vis[x]){
              if(dfs(x,u)) return true;
          }
          else if(vis[x]==1 and x!=p){
              return true;
          }
      }
      return false;
  }
  
    bool isCycle(int n, vector<vector<int>>& edges) {
        // Code here
        adj.resize(n);
        vis.resize(n,0);
        
        for(auto x:edges){
             int u = x[0];
             int v = x[1];
             adj[u].push_back(v);
             adj[v].push_back(u);
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i,-1)){
                    return true;
                }
            }
        }
        return false;
        
        
        
    }
};