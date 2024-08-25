#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<vector<int>> g(2, vector<int>(n));
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                char inp; cin >> inp;
                if(inp == 'x') g[i][j] = 0;
                else g[i][j] = 1;
            }
        }

        
    }
}