#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >>s;
        int c = 1;
        int oiC = 0; 
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='1'){
                if(s[i+1] == '0') c++;
            }
            else{
                if(s[i+1] == '1' && oiC) c++; 
                else if(s[i+1] == '1'&& !oiC) oiC = 1;
            }
        }
        cout << c << endl;
    }

}