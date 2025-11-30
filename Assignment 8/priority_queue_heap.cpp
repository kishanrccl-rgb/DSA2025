#include <iostream>
#include <vector>
using namespace std;

void push_heap(vector<int>& h, int val) {
    h.push_back(val);
    int i = h.size()-1;
    while (i>0) { int p=(i-1)/2; if (h[p]<h[i]) { swap(h[p],h[i]); i=p; } else break; }
}

int pop_heap(vector<int>& h) {
    int ret = h[0]; h[0]=h.back(); h.pop_back();
    int n=h.size(), i=0;
    while (true) { int l=2*i+1, r=2*i+2, mx=i; if (l<n && h[l]>h[mx]) mx=l; if (r<n && h[r]>h[mx]) mx=r; if (mx==i) break; swap(h[i],h[mx]); i=mx; }
    return ret;
}

int main(){ vector<int> h; push_heap(h,3); push_heap(h,1); push_heap(h,5); cout<<pop_heap(h)<<" "<<pop_heap(h)<<" "<<pop_heap(h)<<"\n"; return 0; }
