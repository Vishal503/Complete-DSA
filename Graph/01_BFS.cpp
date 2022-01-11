#include <bits/stdc++.h>
using namespace std;
vector<int> bfs(int v , vector<int> adj[])
{
    vector<int> b;
    vector<int> vis(v,0);
    queue<int> q;
    q.push(0);
    vis[0]=1;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        b.push_back(node);
        for(auto it: adj[node])
        {
            if(!vis[it]){
                q.push(it);
                vis[it] = 1;
            }
        }
    }
    return b;
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u); //for undirected graph
    }
    vector<int> ans = bfs(v,adj);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}