#include<iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n,k;
    int counter = 0;
    cin >> n >> k;
    vector<int> dataArray(n);
    for(int& i:dataArray) cin >> i;
    int kthScore = dataArray[k-1];
    for(int score:dataArray){
        if(score>=kthScore && score>0){
            counter+=1;
        }
    }
    cout << counter;
}