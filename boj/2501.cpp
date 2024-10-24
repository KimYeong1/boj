#include <iostream>

using namespace std;

void input(){
    int N, K;
    cin>>N>>K;
    int count=0;
    int* divisor = new int[N];
    int index = 0;
    for (int i=0; i<N; i++){
        count++;
        if (N%count == 0){
            divisor[index++] = count;
        }
    }
    if (index<K){
        cout<<0;
    }
    else cout<<divisor[K-1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    input();
    return 0;
}