#include <iostream>
#include <vector>

using namespace std;

void reverse(int i, int j, vector<int>& basket){
    int start = i-1;
    int end = j-1;
    while(start<end){
        int temp = basket[start];
        basket[start]=basket[end];
        basket[end]=temp;
        start++;
        end--;
    }
}

void input(){
    int N, M;
    cin>>N>>M;
    vector<int> basket(N); // N개의 요소를 갖는 basket 배열 선언
    for (int k=0; k<N; k++){
        basket[k] = k+1;
    }
    for (int k=0; k<M; k++){
        int i, j;
        cin>>i>>j;
        reverse(i, j, basket);
    }
    for (int k=0; k<N; k++){
        cout<<basket[k]<<" ";
    }
    cout << endl;
}

int main(){
    input();
    return 0;
}
