#include <iostream>
#include <vector>

using namespace std;

void check(int N, int X, vector<int>& A);

void input(){
    int N,X,a;
    vector<int> A;
    cin>>N>>X;
    for (int i =0; i<N; i++){
        cin>>a;
        A.push_back(a);
    }
    check(N, X, A);
}

void check(int N, int X, vector<int>& A){
    for (int i=0; i<N; i++){
        if (A[i]<X){
            cout<<A[i]<<" ";
        }
    }
}

int main(){
    input();
    return 0;
}