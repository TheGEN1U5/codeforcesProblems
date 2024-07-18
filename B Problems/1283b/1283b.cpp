#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll n,k; cin >> n >> k;
        ll kH = k/2;
        cout << n-n%k + min(n%k , kH) << endl;
    }
}