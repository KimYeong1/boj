#include <iostream>

using namespace std;

int main(){
    int input;
    cin>>input;
    for (int i = 0; i<9; i++){
        cout<<input<<" * "<<i+1<<" = "<< input*(i+1)<<"\n";
    }



    return 0;
}