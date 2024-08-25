#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n, t; cin >> n >> t;
    vector<int> ord(n);
    vector<int> diff;
    for(int i = 0; i < n; i++){
        char inp; cin >> inp;
        ord[i] = inp == 'G' ? 1 : 0;
    }
    for(int i = 0; i < n; i++){
        if(ord[i]){
            int to_add = diff.size() ? diff[diff.size() - 1] : 0;
            diff.push_back(i - diff.size() + to_add);
        }
    }
    int gf = 0;
    while(diff[gf] <= t) gf++;
    int c = 0;
    for(int i = 0; i < gf; i++) cout << "G";
    for(int i = 0; i < n; i++){
        if(ord[i] && c < gf){
            c++;
        }
        else{
            ord[i] ? cout << "G" : cout << "B";
        }
    }
    cout << endl;
}