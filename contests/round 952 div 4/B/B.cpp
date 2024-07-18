#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    for(int i; i<t; i++){
        int maxSum;
        vector<int> possibleSums;
        int n;
        cin >> n;
        for(int x=2; x<=n; x++){
            int k = n/x;
            int sum = k*(k+1)*x/2;
            possibleSums.push_back(sum);
        }
        maxSum = *max_element(possibleSums.begin(),possibleSums.end());
        for(int j=0 ; j<possibleSums.size() ; j++){
            if (possibleSums[j]==maxSum){
                cout << j+2 << endl;
            }
        }
    }
}