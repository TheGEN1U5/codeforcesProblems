#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll s; cin >> s;
        ll spendTotal = 0;
        while(s>0){
            if(s<10){
                spendTotal+=s;
                s=0;
            }else{
                ll spendCurrent = s-s%10;
                spendTotal += spendCurrent;
                s -= spendCurrent*9/10;
            }
        }
        cout << spendTotal << endl;
    }
}