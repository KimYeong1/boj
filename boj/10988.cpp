#include <iostream>
#include <string>

using namespace std;

int checkPalindrom(string &input);

void input(){
    string input;
    cin>>input;

    cout<<checkPalindrom(input);
}

int checkPalindrom(string &input){
    for (int i=0; i<input.length()/2; i++){
        if (input[i]!=input[input.length()-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    input();
    return 0;
}