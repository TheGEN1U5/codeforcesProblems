#include <bits/stdc++.h>
using ll = unsigned long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        for(ll& i : a) cin >> i;
        int changed = 1;
        int act = 0;
        while(changed){
            changed = 0;
            for(int i = 0; i < n - 1; i++){
                if(a[i+1] < a[i]){
                    if(a[i+1] <= 1){
                        act = -1;
                        break;
                    }
                    a[i+1] *= a[i+1];
                    changed = 1;
                    act++;
                    break;
                }
            }
        }
        cout << act << endl;
    }
}