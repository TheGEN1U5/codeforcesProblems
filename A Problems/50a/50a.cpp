#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n; cin >> m >> n;
    if(m%2 && n%2) cout << (m*n-1)/2;
    else cout << m*n/2; 
}
