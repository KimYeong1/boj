#include <iostream>
#include <vector>

using namespace std;

void input(){
    int N, M;
    cin>>N>>M;
    int matrix_1[100][100];
    int matrix_2[100][100];
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            cin>>matrix_1[i][j];
        }
    }
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            cin>>matrix_2[i][j];
        }
    }

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            cout<<matrix_1[i][j]+matrix_2[i][j]<<" ";
        }
        cout<<"\n";
    }


}

int main(){
    input();
    return 0;
}

                                // 2차원 배열 동적 메모리 할당 및 해제 (포인터와 new)
// #include <iostream>

// using namespace std;

// int main(){
//     int N,M;

//     int **matrix = new int*[N];
//     for (int i=0; i<N; i++){
//         matrix[i] = new int[M];
//     }

//     for (int i=0; i<N; i++){
//         delete[] matrix[i];
//     }
//     delete[] matrix;

//     return 0;
// }