#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >>n;
        vector<int> a(n);
        int count = 0;
        for(int& i : a) cin >>i;
        long long sumOfAll = 0;
        int highest=0;
        for(int j:a){
            highest = max(j,highest);
            sumOfAll += j;
            if(2*highest == sumOfAll) count++;
        }

        cout << count << endl;
    }
}
