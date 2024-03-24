#include <iostream>

using namespace std;

int main(){
    int input;
    cin>>input;
    int a[input],b[input], c[input];


    for (int i = 0; i<input; i++){
        cin>>a[i]>>b[i];
        c[i]=a[i]+b[i];
    }

    for (int i=0; i<input; i++){
        cout<<c[i]<<"\n";
    }

    return 0;
}