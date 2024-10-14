#include <iostream>
#include <string>
using namespace std;

void input(){
    string S[5]; // string S를 5개로
    int maxLengthString=0;
    for (int i=0; i<5; i++){
        cin>>S[i];
        if (maxLengthString < S[i].length()){
            maxLengthString = S[i].length();
        }
    }

    for (int i=0; i<maxLengthString; i++){
        for (int j=0; j<5; j++){
            if (i<S[j].length()){
                cout<<S[j][i];
            }
        }
    }
}

int main(){
    input();
    return 0;
}