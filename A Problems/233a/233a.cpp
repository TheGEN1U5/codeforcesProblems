#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if(n%2){
        cout << -1;
    }else{
        int i = 0;
        while(i<n){
            cout << i+2 << " " << i+1 << " ";
            i+=2;
        }
    }
}