#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int& i : a) cin>>i;
    vector<int> b = a;
    sort(b.begin(),b.end());
    int hMin = b[0];
    int hMax = b[n-1];
    int hMinL,hMaxL;
    for(int i=n-1; i>=0; i--){
        if(a[i]==hMin){
            hMinL = i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]==hMax){
            hMaxL = i;
            break;
        }
    }
    if(hMaxL<hMinL){
        cout << hMaxL+n-1-hMinL;
    }else{
        cout << hMaxL+n-2-hMinL;
    }
}