#include <iostream>
using namespace std;

int main(){ int a[]={5,3,8,4,2,7,1}; int n=7; int l=0, r=n-1;
 while(l<r){ int min_i=l, max_i=l; for(int i=l;i<=r;i++){ if(a[i]<a[min_i]) min_i=i; if(a[i]>a[max_i]) max_i=i; }
 swap(a[min_i], a[l]); if(max_i==l) max_i=min_i; swap(a[max_i], a[r]); l++; r--; }
 cout<<"Sorted: "; for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"\n"; return 0; }
