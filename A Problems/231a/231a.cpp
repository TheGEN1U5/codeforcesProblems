#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int numOfProb = 0;
    for(int i=0 ; i<n ; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            int inp;
            cin >> inp;
            sum += inp;
        }
        if(sum>=2){
            numOfProb+=1;
        }
    }
    cout << numOfProb;
}