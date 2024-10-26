#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int testCase;
    cin>>testCase;

    for (int i=0; i<testCase; i++){
        int num;
        string S;
        cin>>num>>S;
        for (int j=0; j<S.length(); j++){
            for (int k=0; k<num; k++){
                cout<<S[j];
            }
        }   
        cout<<endl;

    }



    return 0;
}