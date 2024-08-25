#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

bool same_parity(const vector<int> a);

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int& i : a) cin >> i;
        int ops = 0;
        if(same_parity(a)){
            cout << 0 << endl; 
        }else{
            for(int i = 0; i < n; i++){
                if(a[i]%2 == 0){
                    for(int j = 0; j < n; j++){
                        if(a[j]%2 && a[j] > a[i]){
                            a[i] = a[i] + a[j];
                            ops++;
                        }
                    }
                }
            }
            for(int i = 0; i < n; i++){
                if(a[i]%2 == 0){
                    for(int j = 0; j < n; j++){
                        if(a[j]%2){
                            while(a[j] > a[i]){
                                a[i] = a[i] + a[j];
                                ops++;
                            }
                        }
                    }
                }
            }
        }
        cout << ops << endl;
    }
}

bool same_parity(const vector<int> a){
    int p = a[0]%2;
    for(int i = 0, n = a.size(); i < n; i++){
        if(a[i]%2 != p){
            return false;
        }
    }
    return true;
}