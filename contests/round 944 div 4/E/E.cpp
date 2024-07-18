#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k,q; cin >> n >> k >> q;
        vector<long long> a(k+1),b(k+1);
        a[0] = 0; b[0] = 0;
        for(int i=1; i<=k; i++) cin >> a[i];
        for(int i=1; i<=k; i++) cin >> b[i];
        while(q--){
            long long d; cin>>d;

            int aNearest = d==0 ? 0 : lower_bound(a.begin(), a.end(), d) - a.begin() - 1;

            //lower bound function is used to find the position of element in a vector which is the lower bound of a given number
            // vector <int> a = {10,20,30,40,50}; lower_bound(a.begin(),a.end(),35) - a.begin() - 1;
            // returns the index of lower bound of 35 in a i.e 2 for 30...
            //time complexity is O(logN) compared to O(N) if a for loop is used.
            


            if(d == a[aNearest]) cout << b[aNearest] << " ";
            else {
                long long m = b[aNearest] + (d-a[aNearest])*(b[aNearest+1]-b[aNearest])/(a[aNearest+1]-a[aNearest]);
                cout << m << " ";
            }
        }
        cout << endl;
    }
} 