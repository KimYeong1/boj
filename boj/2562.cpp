#include<iostream>

using namespace std;

void input(){
    int input[9];
    int max, index = 0;
    for (int i=0; i<9; i++){
        cin>>input[i];
        if (input[i]>max){
            max = input[i];
            index = i;
        }
    }
    cout<<max<<endl<<index+1;
}



int main(){
    input();
    return 0;
}