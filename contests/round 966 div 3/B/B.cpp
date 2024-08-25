#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        vector<int> curr_seat(n);
        for(int i = 0; i < n; i++) curr_seat[i] = 0;

        int seat1; cin >> seat1; curr_seat[seat1 - 1] = 1;
        int finding_ans = 1;
        for(int i = 1; i < n; i++){
            int inp; cin >> inp;
            if(finding_ans){
                if(inp == 1){
                    if(curr_seat[1]){
                        curr_seat[0] = 1;
                    }
                    else{
                        cout << "NO\n";
                        finding_ans = 0;
                    }
                }else if(inp == n){
                    if(curr_seat[n - 2]){
                        curr_seat[n - 1] = 1;
                    }
                    else{
                        cout << "NO\n";
                        finding_ans = 0;
                    }
                }
                else{
                    if(curr_seat[inp - 2] || curr_seat[inp]){
                        curr_seat[inp - 1] = 1;
                    }
                    else{
                        cout << "NO\n";
                        finding_ans = 0;
                    }
                }
            }
        }
        if(finding_ans){
            cout << "YES\n";
        }
    }
}