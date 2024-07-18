#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int cl=0; int cu=0;
    for(char c: s){
        if(c>='A' && c<='Z') cu++;
        else if(c>='a' && c<='z') cl++;
    }
    if(cu>cl) {
        for(int i; i<s.length(); i++){
            if(s[i]>='a' && s[i]<='z') s[i]-=32;
        }
    }
    else{
        for(int i; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        }
    }
    cout << s;
}