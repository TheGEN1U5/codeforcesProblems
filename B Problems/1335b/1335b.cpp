#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,a,b; cin >> n >> a >> b;
        string str;
        for(int i=0; i<n; i++){
            char a = 97+ i%b;
            str += a;
        }
        cout << str << endl;
    }
}