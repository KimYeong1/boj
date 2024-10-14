#include <iostream>

using namespace std;

void input(){
    int array[100][100] = {{0,}};
    int num;
    cin>>num;
    int x, y;
    for (int i=0; i<num; i++){
        cin>>x>>y;
        for (int j=x; j<x+10; j++){
            for (int k=y; k<y+10; k++){
                array[j][k]++;
            }
        }
    }

    int area = 0;
    for (int i=0; i<100; i++){
        for (int j=0; j<100; j++){
            if (array[i][j]>=1){
                area++;
            }

            // if (array[i][j]==2){
            //     area--;
            // }
        }
    }

    // for (int i=0; i<100; i++){
    //     for (int j=0; j<100; j++){
    //         if (array[i][j]!=0)
    //     }
    // }

    cout<<area;
}

int main(){
    input();

    return 0;
}