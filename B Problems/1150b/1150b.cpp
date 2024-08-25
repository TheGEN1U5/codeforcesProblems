#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> g(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char inp; cin >> inp;
            if(inp == '#') g[i][j] = 0;
            else g[i][j] = 1;
        }
    }
    string ans = "YES";
    if(g[0][0] || g[0][n-1] || g[n-1][0] || g[n-1][n-1]){
        ans = "NO";
    }else{
        for(int i = 1; i < n - 1; i++){
            for(int j = 1; j < n - 1; j++){
                if(g[i][j]){
                    if(g[i - 1][j] && g[i + 1][j] && g[i][j - 1] && g[i][j + 1]){
                        g[i][j] = 0;
                        g[i - 1][j] = 0;
                        g[i + 1][j] = 0;
                        g[i][j - 1] = 0;
                        g[i][j + 1] = 0;
                    }
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j]){
                ans = "NO";
                break;
            }
        }
    }
    cout << ans << endl;
}