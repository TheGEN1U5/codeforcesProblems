#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int c = 0;
        if(k==0){
            cout << 0 << endl;
        }
        else if(k<=n){
            cout << 1 << endl;
        }else{
            k-=n;
            c++;
            for(int i = n-1; i > 0; i--){
                if(k > 2*i){
                    c+=2;
                    k-=2*i;
                }else if(k==2*i){
                    c+=2;
                    break;
                }              
                else if(k > i && k < 2*i){
                    c+=2;
                    break;
                }else{
                    c++;
                    break;
                }
            }
            cout << c << endl;
        }  
    }
}