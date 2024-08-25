#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int c = 0;
        int a1, a2, b1, b2; cin >> a1 >> a2 >> b1 >> b2;
        if(a1 == b1 or a1 == b2 or a2 == b1 or a2 == b2){
            if(a1 == b1 && a2 > b2) c++;
            if(a1 == b2 && a2 > b1) c++;
            if(a2 == b1 && a1 > b2) c++;
            if(a2 == b2 && a1 > b1) c++;
        }
    
        if(a1 > b1 && a2 > b2) c+=2;
        if(a1 > b2 && a2 > b1) c+=2;
        
        cout << c << endl;
    } 
}