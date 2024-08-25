#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int& i : a) cin >> i;
    
    sort(a.begin(), a.end());
    cout << min(a[n - 1] - a[1], a[n - 2] - a[0]) << endl;
}