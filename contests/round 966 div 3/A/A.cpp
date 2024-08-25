#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        if(a.length() >= 3){
            if(a[0] == '1' && a[1] == '0'){
                if(a[2] - '0' >= 2){
                    cout << "YES\n";
                }
                else if(a.length() >= 4 && a[2] == '1'){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
            else{
                cout << "NO\n";
            }
        }else{
            cout << "NO\n";
        }
    }
}