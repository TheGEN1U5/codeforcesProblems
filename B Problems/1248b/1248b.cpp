#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    int soa=0;
    for(int& i : a){
        cin >> i;
        soa += i;
    }
    sort(a.begin(),a.end());
    int k = n/2;
    int soh = 0;
    for(int j=0; j<k; j++) soh += a[j];
    ll ans = pow(soh,2)+pow(soa-soh,2); 
    cout << ans << endl;
}