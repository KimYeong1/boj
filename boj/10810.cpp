#include <iostream>
#include <vector>

using namespace std;

void input(){
    int N,M; // 바구니 갯수 N개, try 개수 M
    cin>>N>>M;
    vector<int> basket(N); // 바구니안에 들어갈 숫자 정보 저장할 동적 배열 선언
    int i, j, k;
    for (int count = 0; count<N; count++){
        basket[count]=0;
    }

    for (int count = 0; count<M; count++){
        cin>>i>>j>>k;
        for (int g=i; g<=j; g++){
            basket[g-1]=k;
        }
    }

    for (int a=0; a<N; a++){
        cout<<basket[a]<<" ";
    }




}

int main(){
    input();
    return 0;
}