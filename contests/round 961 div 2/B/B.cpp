#include <bits/stdc++.h>
#include <cmath>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        // input
        ll n, m; cin >> n >> m;
        vector<ll> petals(n);
        for(ll& i : petals) cin >> i;

        // solving
        sort(petals.begin(), petals.end());
        vector<pair<ll, ll>> pairs;
        for(int i = 0; i < n; i++){
            ll num = petals[i];
            int change = 0;
            for(int i = 0, len = pairs.size(); i < len; i++){
                if(pairs[i].first == num){
                    pairs[i].second+=1;
                    change = 1;
                    break;
                }
            }
            if(!change){
                pairs.push_back(make_pair(num, 1));
            }
        }
        vector<ll> b;
        for(int i = 0, len = pairs.size(); i < len; i++){
            ll k1 = min(pairs[i].second, m/pairs[i].first);
            ll k2;
            if(i == len-1){
                k2 = 0;
            }else if(pairs[i+1].first == pairs[i].first+1){
                k2 = min(pairs[i+1].second, (m-k1*pairs[i].first)/pairs[i+1].first);
            }else{
                k2 = 0;
            }
            b.push_back(k1*pairs[i].first + k2*pairs[i+1].first);
        }
        sort(b.begin(), b.end(), greater<int>());
        ll max = b[0];
        for(ll x : b){
            if(x <= m){
                cout << x << endl;
                break;
            }
        }
    }
}