#include <bits/stdc++.h>
using namespace std;
void add(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void bfs(vector<int> adj[],int v){
    bool visited[v+1];
    for(int i=1;i<=v;i++){
        visited[i] = false;
    }
    queue<int> q;
    int s = 1;
    visited[s] = true;
    q.push(s);
        while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int i=0;i<adj[node].size();i++){
            if(visited[adj[node][i]]==false){
                visited[adj[node][i]]==true;
                q.push(adj[node][i]);
            }
        }
    }
    
}
int main(){
    int v =6;
    vector<int> adj[v+1];
    add(adj, 1, 2);
    add(adj, 1, 3);
    add(adj, 2, 4);
    add(adj, 2, 5);
    add(adj, 3, 5);
    add(adj, 4, 5);
    add(adj, 4, 6);
    add(adj, 5, 6);
    bfs(adj,v);
    return 0;
}