#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n,a,b; cin >> n >> a >> b;
        long long p;
        
        if(b>a && b-n+1>a) p = n*(2*b-n+1)/2;
        else if(b>a) p = (b+1-a)*(b-a)/2 + a*n;
        else p = a*n;
        cout << p << endl;
    }
}

//doesn't work for certain test cases 
//definitely faster , 46 ms

// learning :- avoid loops as much as possible, make algebraic formulae and then use 
//             assignment to reduce time.
