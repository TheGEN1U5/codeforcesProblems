#include <bits/stdc++.h>
using namespace std;

int main(){
    string inp; getline(cin ,inp);
    string n = "";
    for(char c : inp){
        if((c>='a' && c<='z')||(c>='A' && c<='Z')) n=n+c;
    }
    char vowelArr[] = {'a','e','i','o','u','y','A','E','I','O','U','Y'};
    if(find(vowelArr,vowelArr+12,n[n.size()-1]) != vowelArr+12){
        cout << "YES";
    }else cout << "NO";
}