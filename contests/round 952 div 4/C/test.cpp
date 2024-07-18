#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a;
    int n;
    cin >> n;
    for(int j=0; j<n; j++){
        int inp;
        cin >> inp;
        a.push_back(inp);
    }
    int k;
    cin >> k;
    int sumOfAll = 0;
    for(int l=0; l<k;l++){
        sumOfAll = sumOfAll + a[l];
    }
    cout << sumOfAll<<endl;
    bool check = false;
    for(int m=0; m<k; m++){
        cout << "here";
        int sumOfOther = sumOfAll-a[m];
        cout << a[m] << " "<<sumOfOther<<endl;
        if(a[m]==sumOfAll-a[m]){
            check = true;
        }
    }
    return check;
}