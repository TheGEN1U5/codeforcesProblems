#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int p=0;
    vector<int> pl(n);
    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        p += b-a;
        pl[i] = p;
    }
    sort(pl.begin(),pl.end());
    cout << pl[n-1];
}