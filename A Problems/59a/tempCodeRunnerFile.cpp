#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="hello";
    for(int i; i<s.length(); i++){
        s[i] -= 32;
    }
    cout << s;
}