#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int& i : a) cin >> i;
        vector<pair<int, int>> uni;
        for(int i = 0; i < n; i++){
            int in_uni = -1;
            for(int j = 0, l = uni.size(); j < l; j++){
                if(a[i] == uni[j].first){
                    in_uni = j;
                    break;
                }
            }
            if(in_uni == -1){
                pair<int, int> new_pair;
                new_pair.first = a[i];
                new_pair.second = 1;
                uni.push_back(new_pair);
            }else{
                uni[in_uni].second += 1;
            }
        }
        int max_count = 0;
        for(int j = 0, l = uni.size(); j < l; j++){
            if(uni[j].second > max_count) max_count = uni[j].second;
        }
        cout << n - max_count << endl;
    }
}