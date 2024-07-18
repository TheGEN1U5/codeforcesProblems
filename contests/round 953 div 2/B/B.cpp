#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,a,b; cin >>n>>a>>b;
        long long p=0;
        int i=0;
        while(i<b-a){
            p+=b-i;
            i++;
        }
        p+=a*(n-b+a);
        cout << p <<endl;
    }
}

//doesn't work for certain test cases 
//5 5 11
//1000000000 1000000000 1000000000
//1000000000 1000000000 1