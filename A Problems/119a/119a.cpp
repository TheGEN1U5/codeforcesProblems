#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,n; cin >> a >> b >> n;
    int i=1;
    while(n>0){
        if(i){
            n-=gcd(a,n);
            i=0;
        }else{
            n-=gcd(b,n);
            i=1;
        }
    }
    cout << i;
}