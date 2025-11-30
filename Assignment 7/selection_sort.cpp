#include <iostream>
using namespace std;

int main() {
    int a[] = {64,25,12,22,11};
    int n = 5;
    for (int i = 0; i < n-1; i++) {
        int min_i = i;
        for (int j = i+1; j < n; j++) if (a[j] < a[min_i]) min_i = j;
        int t = a[i]; a[i] = a[min_i]; a[min_i] = t;
    }
    cout << "Sorted: "; for (int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"\n";
    return 0;
}
