#include <iostream>
#include <vector>

using namespace std;


vector<int> input(){
    int T; // input 받을 갯수
    int A, B; // 정수 2개
    cin>>T;
    vector<int> sum(T); // C++ 에서 동적배열 사용하기 위함
    for (int i=0; i<T; i++){
        cin>>A>>B;
        sum[i] = A+B;
    }
    return sum;
}

int main(){
    vector<int> output = input();
    for (int i=0; i<output.size(); i++){ // size() : 배열의 크기
        cout<<output[i]<<"\n";
    }
    return 0;
}