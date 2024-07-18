#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int mod(int x){
    if(x<0) return -1*x;
    else return x;
}

int main(){
    int t; cin >> t;
    while(t--){
        vector<char> a(4);
        for(int i=0; i<4; i++){
            char inp; cin >> inp;
            if(inp=='0') a[i] = 58;
            else a[i] = inp;
        }
        int c=4;
        c += mod(a[0] - '1') + mod(a[1]-a[0]) + mod(a[2]-a[1]) + mod(a[3]-a[2]);
        cout << c << endl;
    }
}
