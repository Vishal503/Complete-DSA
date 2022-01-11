#include <bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left , *right;
    node(int k){
        key = k;
        left=  right = NULL;
    }
};
void topview(node *root,int dist,int level,map<int,pair<int,int>> &map){
    if(root==NULL)
        return;
    if (map.find(dist) == map.end() || level < map[dist].second)
    {
         map[dist] = { root->key, level };
    }
    topview(root->left, dist - 1, level + 1, map);
    topview(root->right, dist + 1, level + 1, map);
}
void print(node *root)
{
    map<int,pair<int,int>> map;
    topview(root,0,0,map);
    for(auto i: map)
        cout<<i.second.first<<" ";
}
int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    root->right->left->right = new node(8);
    print(root);
    return 0;
}