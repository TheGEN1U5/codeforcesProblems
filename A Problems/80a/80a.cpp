#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    string ans;
    for(int i=n+1; i<=m; i++){
        int p=1;
        for(int j=2; j<i; j++){
            if(i%j==0){
                p=0;
                break;
            }
        }
        if(p){
            if(i==m) cout << "YES";
            else cout << "NO";
            break;
        }
        if(i==m && !p){
            cout << "NO";
        }
    }
}