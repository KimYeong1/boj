#include <iostream>

using namespace std;

void input(){
    int N;
    int space, star;
    cin>>N;
    // N=space+star;
    for (int i=0; i<N; i++){
        for (int space=N-1-i; space>0; space--){
            cout<<" ";
        }
        for (star=0; star<i+1; star++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main(){
    input();
    
    return 0;
}