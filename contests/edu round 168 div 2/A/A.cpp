#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int rep = -1;
        for(int i = 0, l = s.size() - 1; i < l; i++){
            if(s[i] == s[i+1]){
                rep = i;
                break;
            }
        }
        if(rep != -1){
            for(int i = 0; i <= rep; i++) cout << s[i];
            cout << (char) ((s[rep] - 96)%26 + 97);
            for(int i = rep + 1, l = s.size(); i < l; i++) cout << s[i];
            cout << endl; 
        }
        else{
            cout << (char) ((s[0] - 96)%26 + 97);
            for(int i = 0, l = s.size(); i < l; i++) cout << s[i];
            cout << endl; 
        }
    }
}