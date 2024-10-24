#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int multiple_of_six = 6;
    int count = 1;
    while (N>1){
        N = N-multiple_of_six;
        count++;
        multiple_of_six = 6*count;
    }
    cout<<count;
    return 0;
}
// 육각형. 1 + 6 + 12 + 
// 1 7 19 37 61 ( 6, 12, 18, 24 ... ) -> 6의 배수꼴로 증가
// 7까지는 2개 방 지남
// 19까지는 3개방 지남
// 37까지는 4개방 지남
// 61까지는 5개방 지남
// 6k씩 증가 k는 1씩 증가
// 즉 수열의 공차가 등차수열(6k)
// An = 첫째항 +(공차*n)가 등차수열인데 공차가 지금 6k니까
// An = 첫째항 + (6+12+18+...+))