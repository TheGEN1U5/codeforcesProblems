#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d; cin >> k >> l >> m >> n >> d;
    int c=0;
    for(int i=1; i<=d; i++){
        c += ((!(i%k) || !(i%l)) || (!(i%m) || !(i%n))) ? 1 : 0;
    }
    cout << c;
}