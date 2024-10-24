#include <iostream>

using namespace std;

void input(){
    int N;
    cin>>N;
    int multiple = 1;
    for (int i=0; i<N; i++){
        multiple = multiple*2;
    }
    cout<<(multiple+1)*(multiple+1);
}

int main(){
    input();

    return 0;
}