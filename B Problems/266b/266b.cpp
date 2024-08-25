#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n, t; cin >> n >> t;
    vector<int> ord(n);
    vector<int> ord_curr(n);
    vector<int> diff;
    for(int i = 0; i < n; i++){
        char inp; cin >> inp;
        ord[i] = inp == 'G' ? 1 : 0;
    }
    for(int i = 0; i < n; i++) ord_curr[i] = ord[i];
    while(t--){
        for(int i = 1; i < n; i++){
            if(ord[i] && !ord[i - 1]){
                ord_curr[i] = 0;
                ord_curr[i - 1] = 1;
            }
            else{
                ord_curr[i] = ord[i];
            }
        }
        for(int i = 0; i < n; i++) ord[i] = ord_curr[i];
    }
    for(int i = 0; i < n; i++){
        ord[i] ? cout << "G" : cout << "B";
    }
}