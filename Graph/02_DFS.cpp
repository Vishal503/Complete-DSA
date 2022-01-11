#include <bits/stdc++.h>
using namespace std;
void solve(int node , vector<int> &vis , vector<int> adj[],vector<int> &d)
{
    d.push_back(node);
    vis[node] = 1;
    for(auto it : adj[node])
    {
        if(!vis[it]){
            solve(it,vis,adj,d);
        }
    }
}
vector<int> dfs(int v , vector<int> adj[])
{
    vector<int> d;
    vector<int> vis(v+1,0);
    solve(0,vis,adj,d);
    return d;
}
int main()
{
    int v, e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0;i<e;i++){
        int u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans = dfs(v,adj);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}