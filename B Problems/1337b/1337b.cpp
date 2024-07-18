#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int h,n,m; cin >> h >> n >> m;
        string a = "NO";
        if(h<=10 && m>0) a = "YES";
        else{
            while(h>20 && n--){
                h = h/2 + 10;
            }
            if(h-m*10 <= 0) a = "YES";
        }
        cout << a << endl;
    }
}