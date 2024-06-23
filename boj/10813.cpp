#include <iostream>
#include <vector>

using namespace std;

void change(int* a, int* b){ // ptr을 사용하여 두 값을 바꾸기
    int temp = *a;
    *a=*b;
    *b=temp;
}

void input(){
    int N,M;
    int I,J;
    cin>>N>>M;
    vector<int> basket(N);
    for (int k=0; k<N; k++){
        basket[k]=k+1;
    }
    for (int t=0; t<M; t++){
        cin>>I>>J;
        change(&basket[I-1], &basket[J-1]);
    }
    for (int p=0; p<N; p++){
        cout<<basket[p]<<" ";
    }


}



int main(){
    input();
    return 0;
}