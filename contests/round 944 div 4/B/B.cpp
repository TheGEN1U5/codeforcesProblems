#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        bool allSame = 1;
        for(int i=0; i<s.size(); i++){
            if(s[0] != s[i]){
                char a = s[0];
                s[0] = s[i];
                s[i] = a;
                allSame=0;
                break;
            }
        }
        if(allSame) cout << "NO" << endl;
        else{
            cout << "YES" << endl << s <<endl;
        }
    }
}