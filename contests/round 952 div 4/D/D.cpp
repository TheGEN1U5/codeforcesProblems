#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
		vector<vector<char>> grid(n, vector<char>(m));

        cin >> n >> m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
                cin >> grid[i][j];
			}
		}

        // for(int a=1; a<n; a++){
        //     for(int b=1; b<m; b++){
        //         if((grid[a][b-1] =="." && grid[a][b]=="#") && grid[a][b+1]=="."){
        //             cout << a << " " << b; 
        //         }
        //     }
        // }

        cout << grid[1][2];
    }
}