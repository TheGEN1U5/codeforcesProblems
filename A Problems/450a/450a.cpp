#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int max_val(int a, int m);

int main(){
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(int& i : a) cin >> i;
    int max_v = max_val(a[0], m);
    int max_ind = 0;
    for(int i = 1; i < n; i++){
        if(max_val(a[i], m) >= max_v){
            max_v = max_val(a[i], m);
            max_ind = i;
        }
    }
    cout << max_ind + 1 << endl;
    return 0;
}

int max_val(int a, int m){
    return (a % m) ? (a / m) + 1: a / m;
}