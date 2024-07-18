#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int h,n; cin >> h >> n;
        vector<int> attack(n), cooldown(n);

        for(int& i: attack) cin >> i;
		for(int& i: cooldown) cin >> i;
        long long count=0;
        while(h>0){
            for(int k=0; k<n; k++){
                if(count%cooldown[k]==0){
                    h -= attack[k]; 
                }
            }
            count++;
        }
        cout << count << endl;
    }
}

// logic is perfect all answers correct
// runtime exceeds due to certain test cases
// 100000 1
// 1
// 200000
