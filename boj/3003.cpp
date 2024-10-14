#include <iostream>

using namespace std;

int main(){
    int black_array[6] = {1,1,2,2,2,8};
    int white_array[6];
    for (int i=0; i<6; i++){
        cin>>white_array[i];
        white_array[i] = black_array[i]-white_array[i];
    }
    for (int i =0; i<6; i++){
        cout<<white_array[i]<< " ";
    }


    return 0;

}