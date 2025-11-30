#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n = 6; // nodes 0..5
    vector<vector<int>> adj(n);
    adj[0] = {1,2}; adj[1] = {0,3}; adj[2] = {0,4}; adj[3] = {1,5}; adj[4] = {2}; adj[5] = {3};
    vector<int> vis(n,0);
    queue<int> q; q.push(0); vis[0]=1;
    cout<<"BFS: ";
    while(!q.empty()){ int u=q.front(); q.pop(); cout<<u<<" ";
        for(int v: adj[u]) if(!vis[v]){ vis[v]=1; q.push(v);} }
    cout<<"\n"; return 0;
}
