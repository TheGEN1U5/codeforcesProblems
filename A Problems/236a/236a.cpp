#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >>n;
    vector<char> h;
    for(char c:n){
        if(find(h.begin(),h.end(),c) == h.end()){
            h.push_back(c);
        }
    }
    string a = h.size()%2 ? "IGNORE HIM!" : "CHAT WITH HER!" ;
    cout << a;
}