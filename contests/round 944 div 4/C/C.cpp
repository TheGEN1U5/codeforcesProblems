#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a,b,c,d; cin >> a >> b >> c >> d;
        vector<int> k = {a,b,c,d};
        sort(k.begin(),k.end());
        for(int i=0; i<4; i++){
            if(k[i]==a || k[i]==b) k[i] = 0;
            else k[i] = 1;
        }
        vector<int> k1 = {0,1,0,1};
        vector<int> k2 = {1,0,1,0};
        if(k==k1 || k==k2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}