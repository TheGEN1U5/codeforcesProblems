#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    double s;
    for(int i=0; i<n; i++){
        double p; cin >> p;
        s += p/n;
    }
    cout << s;
}