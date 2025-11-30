#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=5; int INF=1e9;
    int g[5][5] = {{0,2,0,6,0},{2,0,3,8,5},{0,3,0,0,7},{6,8,0,0,9},{0,5,7,9,0}};
    vector<int> key(n,INF), mst(n,0);
    key[0]=0;
    for(int cnt=0;cnt<n-1;cnt++){
        int u=-1, mn=INF; for(int i=0;i<n;i++) if(!mst[i] && key[i]<mn){mn=key[i];u=i;}
        mst[u]=1;
        for(int v=0;v<n;v++) if(g[u][v] && !mst[v] && g[u][v]<key[v]) key[v]=g[u][v];
    }
    cout<<"Prim done\n"; return 0;
}
