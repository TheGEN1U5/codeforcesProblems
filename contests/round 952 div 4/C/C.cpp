#include <bits/stdc++.h>
using namespace std;

bool checkGood(vector <int> a, int k){
    long long sumOfAll = 0;
    for(int l=0; l<k;l++){
        sumOfAll += a[l];
    }
    bool check = false;
    for(int m=0; m<k; m++){
        int sumOfOther = sumOfAll-a[m];
        if(a[m]==sumOfAll-a[m]){
            check = true;
        }
    }
    return check;
}

int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int j=0; j<n; j++){
            int inp;
            cin >> inp;
            a.push_back(inp);
        }
        int count = 0;
        for(int k=1; k<=n; k++){
            if(checkGood(a,k)){
                count++;
            }
        }
        cout << count << endl;
    }
}

