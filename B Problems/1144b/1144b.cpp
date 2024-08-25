#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int& i : a) cin >> i;
    sort(a.begin(), a.end());

    int odd_c = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2) odd_c++;
    }

    int even_c = n - odd_c;

    int max = (int) even_c < odd_c;
    int diff = max ? odd_c - even_c : even_c - odd_c;
    if(diff > 0) diff--;
    int sum = 0;
    for(int i = 0; i < n && diff; i++){
        if(a[i]%2 == max){
            sum += a[i];
            diff--;
        }
    }
    cout << sum << endl;
}