#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s, t; cin >> s >> t;
        int start = 0;
        int c = 0;
        for(int i = 0, lt = t.length(); i < lt; i++){
            int k = -1;
            for(int j = start, ls = s.length(); j < ls; j++){
                if(t[i] == s[j]){
                    k = i;
                    start = j+1;
                }
            }
            if(k == -1){
                for(int j = 0, ls = s.length(); j < ls; j++){
                    if(s[j] == '?'){
                        s[j] = t[i];
                        start = j+1;
                        break;
                    }
                }
            }
        }
        start = 0;
        for(int i = 0, lt = t.length(); i < lt; i++){
            for(int j = start, ls = s.length(); j < ls; j++){
                if(t[i] == s[j]){
                    start = j+1;
                    c++;
                    break;
                }
            }
        }
        char not_in_t = 'a';
        int m = 1;
        while(m){
            m = 0;
            for(int i = 0, lt = t.length(); i < lt; i++){
                if(t[i] == not_in_t){
                    not_in_t = (char) t[i] + 1;
                    m = 1;
                    break;
                }
            }
        }
        if(c == t.length()){
            for(int j = 0, ls = s.length(); j < ls; j++){
                if(s[j] == '?') s[j] = not_in_t;
            }
            cout << "YES\n" << s << endl;
        }else{
            cout << "NO\n";
        }
    }
}