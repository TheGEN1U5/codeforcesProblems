#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i<n ; i++){
        string word;
        cin >> word;
        int wordLength = word.length();
        if(wordLength>10){
            string lenStr = to_string(wordLength-2);
            string newWord = word[0] + lenStr + word[wordLength-1];
            cout << newWord << endl;
        }else{
            cout << word << endl;
        }

    }
}