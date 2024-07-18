#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<int> rx,ry;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == '*'){
                rx.push_back(i+1);
                ry.push_back(j+1);
            }
        }
    }
    for(int x: rx){
        if(count(rx.begin(), rx.end(), x)==1){
            cout << x << " ";
        }
    }
    for(int y: ry){
        if(count(ry.begin(), ry.end(), y)==1){
            cout << y;
        }
    }
}