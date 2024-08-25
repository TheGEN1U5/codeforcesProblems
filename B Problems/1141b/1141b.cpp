#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int& i : a) cin >> i;

    int mid_max = 0;
    int this_sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1) this_sum++;
        if(i == n - 1){
            if(a[i] == 1 && mid_max == 0){
                mid_max = this_sum;
            }
        }else if(a[i + 1] == 0 ){
            if(this_sum > mid_max){
                mid_max = this_sum;
            }
            this_sum = 0;
        }
    }
    int end_max = 0, start_max = 0;
    if(a[0] && a[n - 1]){
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] == 0){
                start_max = i + 1;
                break;
            }
        }
        for(int i = 0; i < n - 1; i++){
            if(a[n - i - 2] == 0){
                end_max = i + 1;
                break;
            }
        }
    }
    cout << max(mid_max, start_max + end_max) << endl;
}