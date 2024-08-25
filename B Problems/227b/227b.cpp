#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int& i : a) cin >> i;
    vector<int> indices(n + 1);
    for(int i = 0; i < n; i++){
        indices[a[i]] = i;
    }
    int m; cin >> m;
    ll v = 0, p = 0;
    for(int i = 0; i < m; i++){
        int q; cin >> q;
        int ind_q = indices[q];
        v += ind_q + 1;
        p += n - ind_q;
    }
    cout << v << " " << p << endl;
}