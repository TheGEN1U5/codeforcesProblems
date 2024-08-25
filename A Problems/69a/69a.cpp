#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n; cin >> n;
    int xt = 0, yt = 0, zt = 0;
    while(n--){
        int x, y, z;
        cin >> x >> y >> z;
        xt += x; yt += y; zt += z;
    }
    if(!(xt || yt || zt)) cout << "YES\n";
    else cout << "NO\n";
}