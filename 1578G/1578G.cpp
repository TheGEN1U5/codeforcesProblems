#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

double findProb(int person1, int person2, vector<int> luckynessArray){
    double prob1wins = luckynessArray[person1-1]/(luckynessArray[person1-1]+luckynessArray[person2-1]);
    return prob1wins;
}

int main(){
    int n;
    int k;
    cin >> n;
    for (int i=0; pow(2,i)<n; i++){
        if(pow(2,i)<n && pow(2,i+1)>n){
            k = 2*(n-pow(2,i));
        }
    }
    cout<<k;

    vector<int> luckynessArray;
    for(int i=0;i<n;i++){
        int inp;
        cin >> inp;
        luckynessArray.push_back(inp);
    }
    cout<<luckynessArray[0];
}