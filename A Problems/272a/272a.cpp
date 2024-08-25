#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n; cin >> n;
    int fin = 0;
    for(int i = 0; i < n; i++){
        int inp; cin >> inp;
        fin += inp;
    }
    int ways = 0;
    for(int i = 1; i <= 5; i++){
        if((fin + i) % (n + 1) != 1){
            ways++;
        }
    }
    cout << ways << endl;
}