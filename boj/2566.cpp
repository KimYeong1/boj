#include <iostream>

using namespace std;

void input(){
    int array[9][9];
    int max = -1;
    int I,J = 0;
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            cin>>array[i][j];
            if (max < array[i][j]){
                max = array[i][j];
                I = i+1;
                J = j+1;
            }
        }
    }
    cout<<max<<"\n";
    cout<<I<<" "<<J; 
}

int main(){
    input();
}