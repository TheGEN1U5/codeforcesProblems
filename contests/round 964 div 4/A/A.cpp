#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << n%10 + (n-n%10)/10 << endl;
    }
}