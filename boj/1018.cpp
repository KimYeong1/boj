#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M,N;
    cin>>M>>N;
    char board[M][N];

    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
            cin>>board[i][j];
        }
    }

    string check_W[8] = {"WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW"
                    };
    string check_B[8] = {"BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB",
                        "BWBWBWBW",
                        "WBWBWBWB"
                    };

    // check - brute force
    int minimum = 64;
    char check[8][8];

    for (int i=0; i<=M-8; i++){
        for (int j=0; j<=N-8; j++){
            
            for (int a=0; a<8; a++){
                for (int b=0; b<8; b++){
                    check[a][b] = board[a+i][b+j];
                }
            }

            int count_B = 0;
            int count_W = 0;
            for (int a=0; a<8; a++){
                for (int b=0; b<8; b++){
                    if (check_W[a][b] != check[a][b]){
                        count_W++;
                    }
                    if (check_B[a][b] != check[a][b]){
                        count_B++;
                    }
                }
            }
            // cout<<"count_W : "<<count_W<<"\n";
            // cout<<"count_B : "<<count_B<<"\n";
            int count = min(count_W,count_B);
            if (minimum > count){
                minimum = count;
            }
        }
    }
    cout<<minimum;
    return 0;
}