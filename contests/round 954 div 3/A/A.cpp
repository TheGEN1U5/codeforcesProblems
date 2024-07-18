#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        vector<int> a(3);
        for(int&i : a) cin >> i;
        sort(a.begin(),a.end());
        vector<int> b = {a[2]-a[0] , 2*a[2]-a[0]-a[1] , a[1]+a[2]-2*a[0] };
        sort(b.begin(), b.end());
        cout << b[0] << endl;
    }
}