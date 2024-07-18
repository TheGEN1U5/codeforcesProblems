#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> m(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> m[i][j];
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += m[i][i];
        sum += m[n-1-i][i];
    }
    for(int i=0; i<n; i++){
        sum += m[(n-1)/2][i];
        sum += m[i][(n-1)/2];
    }
    sum -= 3*m[(n-1)/2][(n-1)/2];
    cout << sum;
    
}