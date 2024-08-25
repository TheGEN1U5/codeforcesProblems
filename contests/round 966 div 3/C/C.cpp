#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        for(ll &i : a) cin >> i;
        ll min_a = a[0];
        for(ll i : a){
            if(i < min_a) min_a = i;
        }
        min_a--;
        vector<ll> char_map(26);
        int m; cin >> m;
        while(m--){
            for(int i = 0; i < 26; i++) char_map[i] = min_a;
            string s; cin >> s;
            int checking = 1;
            if(s.length() == n){
                for(int i = 0; i < n; i++){
                    if(checking){
                        int ch = s[i] - 'a';
                        if(char_map[ch] == min_a){ //unmapped
                            char_map[ch] = a[i];   //mapping to corresponding number in array
                        }else{                     //mapped
                            if(char_map[ch] != a[i]){ //does mapping hold?
                                cout << "NO\n";
                                checking = 0;
                                break;
                            }
                        }
                    }
                }
                if(checking){
                    cout << "YES\n";
                }
            }else{
                cout << "NO\n";
            }
        }
    }
}