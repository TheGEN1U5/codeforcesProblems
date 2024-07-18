#include <bits/stdc++.h>
using namespace std;

int main(){
    //a^2+b = n
    //a+b^2 = m
    int n,m; cin >> n >> m;
    int iRm = pow(m,0.5);
    int count=0;
    for(int b=0; b<=min(n,iRm); b++){
        if(pow(m - pow(b,2),2)+b == n){
            count++;
        }
    }
    cout << count;
}