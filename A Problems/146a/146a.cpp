#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<char> t(n);
    for(char& i: t) cin >> i;
    bool fsCheck = true;
    for(char ch : t){
        if(!(ch == '4' || ch == '7')){
            fsCheck = false;
        }
    }
    if(fsCheck){
        int halfSum=0;
        for(int i=0; i<n/2; i++){
            int strInt = t[i]-48;
            halfSum += strInt;
        }
        int halfSumO=0;
        for(int i=n/2; i<n; i++){
            int strInt = t[i]-48;
            halfSumO += strInt;
        }
        if(halfSum==halfSumO){
            cout << "YES";
        }else cout << "NO";
    }else cout << "NO";
}