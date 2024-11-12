#include <iostream>
#include <cmath>

using namespace std;

void recursion(int N){
    int tmp = pow(3, N-1);

    if (N == 0){
        cout<<"-";
        return;
    }

    recursion(N-1);

    for (int i=0; i<tmp; i++){
        cout<<" ";
    }

    recursion(N-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    while (cin>>N){
        recursion(N);
        cout<<"\n";
    }

    return 0;
}
