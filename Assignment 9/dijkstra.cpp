#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=5, INF=1e9;
    int g[5][5] = {{0,10,0,30,100},{10,0,50,0,0},{0,50,0,20,10},{30,0,20,0,60},{100,0,10,60,0}};
    vector<int> dist(n,INF), vis(n,0);
    dist[0]=0;
    for(int i=0;i<n;i++){
        int u=-1, mn=INF; for(int j=0;j<n;j++) if(!vis[j] && dist[j]<mn){mn=dist[j];u=j;}
        if(u==-1) break; vis[u]=1;
        for(int v=0;v<n;v++) if(g[u][v] && !vis[v] && dist[u]+g[u][v]<dist[v]) dist[v]=dist[u]+g[u][v];
    }
    cout<<"Distances: "; for(int i=0;i<n;i++) cout<<dist[i]<<" "; cout<<"\n";
    return 0;
}
