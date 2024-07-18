#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    for(int i=0 ; i<nums.size() ; i++){
        if (nums[i]==3){
            cout << i;
        }
    }
}