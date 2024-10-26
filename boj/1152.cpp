#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    getline(cin, S);
    int count=0;
    for (int i=0; i<S.length(); i++){
        if (S[i] == ' '){
            count++;
        }
    }

    if (S[0] == ' '){
        count--;
    }
    if (S[S.length()-1] == ' '){
        count--;
    }

    cout<<count+1;

    return 0;
}