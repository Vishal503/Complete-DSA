  #include <bits/stdc++.h>
  using namespace std;
  class Solution{
  public:
  vector<int> v;
  void solve(int s,vector<int> &vis , vector<int> g[]){
      vis[s] = 1;
      v.push_back(s);
      for(auto x:g[s]){
          if(!vis[x]){
              solve(x,vis,g);
          }
      }
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        v.clear();
        vector<int> vis(V,0);
        solve(0,vis,adj);
        return v;
    }
};
int main(){
    int V,E;
    cin>>V>>E;
    vector<int> adj[V];
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V,adj);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}