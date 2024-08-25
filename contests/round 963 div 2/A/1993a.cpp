#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a = 0, b = 0, c = 0, d = 0, q = 0;
        for(int i = 0, l = 4 * n; i < l; i++){
            char inp; cin >> inp;
            if(inp == 'A') a++;
            else if(inp == 'B') b++;
            else if(inp == 'C') c++;
            else if(inp == 'D') d++;
            else q++;
        }
        int ans = min(a, n) + min(b, n) + min(c, n) + min(d, n);
        cout << ans << endl;
    }
}