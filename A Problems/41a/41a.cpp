#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int c=0;
    for(int i=1; i<=n; i++){
        int t = i*(i+1)/2;
        if(n==t){
            c=1;
            break;
        }
    }
    if(c) cout<<"YES";
    else cout<<"NO";
}