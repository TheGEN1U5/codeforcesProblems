#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        vector<int> p(n-1);
        for(int& i : a) cin >>i;
        for(int i=1; i<n; i++){
            p[i-1] = (a[i-1]+a[n-1]);
        }
        int mx=0;
        for(int j: p) mx= max(j,mx);
        cout << mx << endl;
    }
}