#include <bits/stdc++.h>
using ll = long long;
using namespace std;


int main(){
    int n; cin >> n;
    vector<ll> b(n);
    for(ll& i : b) cin >> i;
    ll mx = 0;
    for(int i; i<n; i++){
        ll o = b[i] + mx;
        mx = max(mx,o);
        cout << o << " ";
    }
}