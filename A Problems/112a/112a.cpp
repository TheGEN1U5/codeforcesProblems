#include <bits/stdc++.h>
using namespace std;

char utl(char in){
    if(in <= 'Z' && in >= 'A'){
        return in - ('Z'-'z');
    }else{
        return in;
    }
}

int main(){
    string a,b; cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), utl);
    transform(b.begin(), b.end(), b.begin(), utl);
    int ans = 0;
    for(int i=0; i<a.length(); i++){
        if(a[i]<b[i]){
            ans = -1;
            break;
        }else if(a[i]>b[i]){
            ans = 1;
            break;
        }
    }
    cout << ans;
}