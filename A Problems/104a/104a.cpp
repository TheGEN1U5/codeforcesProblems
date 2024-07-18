#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    n-=10;
    if((n>=-9 && n<=0)||(n>=12 && n<=15)) cout << 0;
    else if(n==1) cout << 4;
    else if(n>=2 && n <=9) cout << 4;
    else if(n==10) cout << 15;
    else if(n==11) cout << 4;
    else if(n>=12 && n<=15) cout << 0;
}