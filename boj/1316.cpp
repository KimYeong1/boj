#include <iostream>
#include <string>

using namespace std;

bool check(string &S){
    int alphabet[26] = {0,};
    for (int i=0; i<S.length()-1; i++){
        alphabet[S[i]-'a'] = 1;
        if (S[i]==S[i+1]){
            continue;
        }
        else{
            
            if (alphabet[S[i+1]-'a'] == 1){
                return false;
            }
        }
    }
    return true;
}

int input(){
    string S;
    int num;
    cin>>num;
    int count = 0;
    for (int i=0; i<num; i++){
        cin>>S;
        if (check(S)){
            count++;
        }
    }
    return count;
}

int main(){
    cout<<input();
    return 0;
}