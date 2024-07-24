#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n; cin >> n;
    vector<ll> a(n); for(ll& i : a) cin >> i;
    ll neg_count = 0;
    ll zero_count = 0;
    ll coins = 0;
    // find least negative number
    for(ll i = 0; i < n; i++){
        if(a[i] < 0){
            neg_count++;
            coins -= a[i] + 1;
        }
        else if(a[i] > 0){
            coins +=  a[i] - 1;
        }else{
            zero_count++;
        }
    }
    if(neg_count%2 && zero_count == 0){
        coins+=2;
    }else{
        coins+=zero_count;
    }
    cout << coins << endl;
}