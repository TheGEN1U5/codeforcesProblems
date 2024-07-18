#include <bits/stdc++.h>
using namespace std;

bool allSame(string s){
    if(s.size()==0) return 1;
    for(char c : s){
        if (c!=s[0]) return 0;
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int turn = 0;
        while(!allSame(s)){
            for(int i=1; i<s.size(); i++){
                if((s[i-1]=='0'&&s[i]=='1') || (s[i-1]=='1'&&s[i]=='0')){
                    s.erase(i-1,2);   //str.erase(m,n) erases n char from index m including mi.e characters on indices m,m+1,m+2, ... , m+n-1
                    break;
                }
            }
            if(turn) turn = 0;
            else turn = 1;
        }
        string a = turn ? "DA" : "NET";
        cout << a << endl;
    }
}