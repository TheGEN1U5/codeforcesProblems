#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> points(n);
    for(int& i: points) cin >> i;
    int count;
    for(int i=0; i<n; i++){
        bool biggest=true;
        bool smallest=true;
        for(int j=0; j<i; j++){
            if(points[j]>=points[i]){
               biggest = false; 
            }
            if(points[j]<=points[i]){
               smallest = false; 
            }            
        }
        if(biggest || smallest){
            count ++;
        }
    }
    cout << count-1;
}