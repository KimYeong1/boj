#include <iostream>

using namespace std;

void comparison(int a, int b){
    if (a<b){
        cout<<"<";
    }
    else if (a>b){
        cout<<">";
    }
    else{
        cout<<"==";
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    comparison(a,b);

    return 0;
}
