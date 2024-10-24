#include <iostream>

using namespace std;

void input(){
    int N;
    cin>>N;
    int minimum = N;
    bool find = false;
    for (int i=0; i<=N/5; i++){
        for (int j=0; j<=N/3; j++){
            if ((5*i)+(3*j) == N){
                if (minimum > i+j){
                    minimum = i+j;
                    find = true;
                }
            }
        }
    }
    if (find) cout<<minimum;
    else cout<<-1;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}