#include <iostream>
#include <vector>

using namespace std;

void input(){
    int N;
    cin>>N;
    if (N==1){
        return;
    }
    vector<int> divisor;
    int i = 1;
    while (i<N){
        i++;
        if (N%i==0){
            divisor.push_back(i);
            N = N/i;
            i = 1;
        }
    }

    for (int i=0; i<divisor.size(); i++){
        cout<<divisor[i]<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}