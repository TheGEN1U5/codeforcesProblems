#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n%2 == 0){
            cout << -1 << endl;
        }
        else{
            for(int i = 0; i < n; i++){
                int out = n - 2*i;
                out < 0 ? out = -out + 1 : out = out;
                cout << out << " ";
            }
            cout << endl;
        }
    }
}