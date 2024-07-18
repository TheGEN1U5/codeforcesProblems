#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> l(n);
    vector<int> m(n);
    for(int& j: l) cin >> j;
    for(int i; i<n; i++){
        m[l[i]-1] = i+1;
    }
    for(int k : m){
        cout << k << " ";
    }
}