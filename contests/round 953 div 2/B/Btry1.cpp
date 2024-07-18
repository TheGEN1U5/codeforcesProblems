#include <iostream>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n,a,b; cin >>n>>a>>b;
        long long p=0;
        for(int i=0; i<n; i++){
            if(b-i>a) p+=b-i;
            else p+=a;
        }
        cout << p<< endl;
    }
}

//solution works but time limit exceeded...
//very slow , 1186 ms
// must make algorithm more efficient