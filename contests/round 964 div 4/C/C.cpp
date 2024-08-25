#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int solve(int n, int s, int m);

int main(){
    int t; cin >> t;
    while(t--){
        int n, s, m; cin >> n >> s >> m;
        if(solve(n, s, m)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int solve(int n, int s, int m){
    vector<int> curr {0, 0};
    int ans = 0;
    for(int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        if(l - curr[1] >= s){
            ans = 1;
        }
        curr[0] = l; curr[1] = r;
    }
    if(m - curr[1] >= s){
        ans = 1;
    }
    return ans;
}