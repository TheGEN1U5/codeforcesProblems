#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n); for(int& i : a) cin >> i;
        sort(a.begin(), a.end());
        int d = a[0] + k - a[n-1] + k;
        if(d < 0){
            cout << "-1\n";
        }else{
            cout << a[0] + k << endl;
        }
    }
}