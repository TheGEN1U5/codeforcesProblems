#include <bits/stdc++.h>
using namespace std;

int main(){
    string in; cin >> in;
    int c = 0;
    for(char i : in){
        if(i=='4'||i=='7'){
            c++;
        }
    }
    bool l=1;
    string s = to_string(c);
    for(char k : s){
        if(k!='4'&&k!='7'){
            l=0;
        }
    }
    if(l) cout << "YES";
    else cout << "NO";
}