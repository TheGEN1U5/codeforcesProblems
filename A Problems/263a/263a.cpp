#include <bits/stdc++.h>
using namespace std;

int mod(int x){
    if(x<0) return -1*x;
    else return x;
}

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int k; cin >> k;
            if(k==1){
                cout << mod(i-2)+mod(j-2);
            }
        }
    }
}