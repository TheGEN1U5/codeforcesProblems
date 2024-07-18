#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i; i<n; i++){
        string a,b;
        cin >> a >> b;
        int aO,bO;
        aO = a[0];
        bO = b[0];
        a[0] = bO;
        b[0] = aO;
        cout << a << " " << b << endl;
    }
}