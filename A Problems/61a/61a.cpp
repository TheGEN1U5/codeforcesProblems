#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b; cin >> a >> b;
    for(int i; i<a.length(); i++){
        if(a[i]==b[i]) cout << 0;
        else cout << 1;
    }
}