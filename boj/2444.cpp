#include <iostream>

using namespace std;

int input(){
    int num;
    cin>>num;
    return num;
}

void output(){
    int num = input();
    for (int i=0; i<num; i++){
        for (int j=(num-i)-1; j>0; j--){
            cout<<" ";
        }
        for (int k=0; k<2*i+1; k++){
            cout<<"*";
        }
        // for (int j=(num-i)-1; j>0; j--){
        //     cout<<" ";
        // }
        cout<<"\n";
    }
    for (int i = 0; i<num-1; i++){
        for (int j=0; j<i+1; j++){
            cout<<" ";
        }
        for (int k=2*num-3; k>2*i; k--){
            cout<<"*";
        }
        // for (int j=0; j<i+1; j++){
        //     cout<<" ";
        // }
        cout<<"\n";
    }
}


int main(){
    output();
    return 0;
}

