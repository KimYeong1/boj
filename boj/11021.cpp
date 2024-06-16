#include <iostream>
#include <vector>
using namespace std;

int input(){
    int T;
    cin>>T;
    return T;
}

int input_AB(){
    int A, B, sum;
    cin>>A>>B;
    sum = A+B;
    return sum;
}

void Case(int T, vector<int> & sum){
    for (int i=1; i<=T; i++){
        cout<<"Case #"<<i<<": "<<sum[i-1]<<"\n";
    }
}

int main(){
    int T = input();
    vector<int> sum(T);
    for (int i=0; i<T; i++){
        sum[i]= input_AB(); // �迭�� �� ��ҿ� �� �־���
    }
    Case(T, sum);
    
    return 0;
}