#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> shoes(4);
    for(int& i: shoes) cin >> i;
    int count = 0;
    vector<int> hash;
    for(int shoe : shoes){
        if(find(hash.begin(),hash.end(),shoe) == hash.end()){
            hash.push_back(shoe);
        }
    }
    
    cout << 4-hash.size();
}