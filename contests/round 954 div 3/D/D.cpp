#include <bits/stdc++.h>
using ll = long long; 
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<char> a(n);
        for(char& i : a) cin >> i;
        if(n==2){
            cout << (a[0]-48)*10 + a[1]-48 << endl;
        }else{
            if(find(a.begin(),a.end(),'0') != a.end()){
                cout << 0 << endl;
            }else{
                vector<string> b(n-1);
                for(int i=0; i<n-1; i++){
                    b[i] = a[i];
                    b[i] += a[i+1];
                }
                vector<string> c = b;
                sort(c.begin(),c.end());
                int k = find(b.begin(),b.end(),c[0]) - b.begin();
                int sum = 0;
                for(int j=0; j<k; j++){
                    int toAdd = a[j]-48;
                    sum += toAdd;
                }
                int r = (a[k]-48)*10 + a[k+1]-48;
                sum += r;
                for(int j = k+2; j<n; j++){
                    int toAdd = a[j]-48;
                    sum += toAdd;
                }
                cout << sum << endl;
            }
        }

    }
}