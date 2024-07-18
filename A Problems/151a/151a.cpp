#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = k*l/nl;
    int y = c*d;
    int z = p/np;
    vector<int> a = {x,y,z};
    sort(a.begin(),a.end());
    int ans = a[0]/n;
    cout << ans;
}