#include <iostream>

using namespace std;

int Combination(int M, int N){
    int temp = M-N;
    if (N>temp){
        swap(N, temp);
    }

    long long boonja = 1;
    for (int i=0; i<N; i++){
        boonja *= M-i;
    }
    long long boonmo = 1;
    for (int i=0; i<N; i++){
        boonmo*= N-i;
    }
    return boonja/boonmo;
}

int main(){
    int testCase;
    cin>>testCase;
    int N, M;
    for (int i=0; i<testCase; i++){
        cin>>N>>M;
        cout<<Combination(M, N)<<"\n";
    }


    return 0;
}