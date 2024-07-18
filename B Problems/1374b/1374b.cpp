#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        int e2,e3;
        long long p2=1;
        long long p3=1;
        for(int i=0; n%p2==0; i++){
            e2 = i;
            p2 = pow(2,e2+1);
        }
        for(int i=0; n%p3==0; i++){
            e3 = i;
            p3 = pow(3,e3+1);
        }
        if(n != p2*p3/6 || (e2 > e3)) cout << -1 << endl;
        else cout << 2*e3-e2 << endl;
    }
}