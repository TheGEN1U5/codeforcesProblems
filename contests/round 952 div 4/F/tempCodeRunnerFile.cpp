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
        int count=0;
        while(h>0){
            int damage = 0;
            for(int k=0; k<n; k++){
                if(count%cooldown[k]==0){
                    damage += attack[k]; 
                }
            }
            h -= damage;
            count++;
        }
        cout << count;
    }
}