#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int& i: a) cin >> i;
        bool allSame = true;
        for(int i=0; i<n; i++){
            if(a[0]!=a[i]){
                allSame = false;
            }
        }
        if(!allSame){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i!=j){
                        if(a[i]==a[j]){
                            a.erase(a.begin()+j);
                        }else if (a[i]-a[j]<1 && a[i]-a[j]>-1){
                            a.erase(find(a.begin(),a.end(),min(a[i],a[j])));
                        }
                    }
                }
            }
            string ans = a.size()==1 ? "YES" : "NO";
            cout << ans <<endl;
        }else{
            cout << "YES" << endl;
        }
    }
}