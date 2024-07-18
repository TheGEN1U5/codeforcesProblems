#include <bits/stdc++.h>
using namespace std;

bool checkGood(vector <int> a, int k){
    long long sumOfAll = 0;
    for(int l=0; l<k;l++){
        sumOfAll += a[l];
    }
    bool check = false;
    vector<int> b;
    for(int m=0; m<k; m++){
        b[m]=a[m];
    }
    sort(b.begin(),b.end());
    if(2*b[b.size()-1] == sumOfAll) check = true;
    return check;
}

int main(){
    int t;
    cin >>t;
    for(int i; i<t; i++){
        vector<int> a;
        int n;
        cin >> n;
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

