#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        s[0] = '(';
        int c = 0;
        for(int i = 1; i < n; i+=2){
            if(s[i] == '('){
                s[i+1] = ')';
            }
        }
        for(int i = 0; i < n; i+=2){
            if(s[i] == '_'){
                s[i] = '(';
            }
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                int l = 1;
                int r = 0;
                for(int j = i + 1;  j < n; j++){
                    if(s[j] == '(') l++;
                    else r++;
                    if(l == r){
                        c += j - i;
                        break;
                    }
                }
            }
        }
        cout << c << endl;
    }
}