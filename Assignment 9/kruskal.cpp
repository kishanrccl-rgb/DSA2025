#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Edge{int u,v,w;};
int findp(vector<int>& p,int x){return p[x]==x?x:p[x]=findp(p,p[x]);}
int main(){
    int n=4; // nodes 0..3
    vector<Edge> edges={{0,1,10},{0,2,6},{0,3,5},{1,3,15},{2,3,4}};
    sort(edges.begin(),edges.end(),[](Edge&a,Edge&b){return a.w<b.w;});
    vector<int> p(n); for(int i=0;i<n;i++) p[i]=i;
    cout<<"MST edges: ";
    for(auto &e: edges){ int pu=findp(p,e.u), pv=findp(p,e.v); if(pu!=pv){ p[pu]=pv; cout<<"("<<e.u<<","<<e.v<<") "; }}
    cout<<"\n"; return 0;
}
