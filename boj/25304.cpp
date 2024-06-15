#include <iostream>

using namespace std;

string input(){
    int X;
    int N;
    int a;
    int b;
    int multiple_a_b = 0;
    cin>>X; // 총 금액
    cin>>N; // 물건 갯수
    for (int i=0; i<N; i++){ // 물건 갯수만큼 cin이 들어와야함
        cin>>a>>b;
        multiple_a_b += a*b; // a와 b의 곱을 계산하고 더해줌.
        // X와 비교하기 위함
    }
    if (multiple_a_b == X){
        return "Yes";
    }
    else{
        return "No";
    }
}


int main(){
    cout<<input();
    return 0;
}