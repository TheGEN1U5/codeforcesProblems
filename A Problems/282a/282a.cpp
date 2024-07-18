#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    for(int i =0; i<n; i++){
        string inp;
        cin >> inp;
        (inp.find("+") != string::npos) ? x+=1: x-=1;
    }
    cout << x;
}