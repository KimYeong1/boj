#include <iostream>

using namespace std;

void input(){
    int N;
    int num;
    cin>>N;
    int divisor = N;

    for (int i=0; i<N; i++){
        cin>>num;
        if (num==1) divisor--;
        int count = 2;

        while (count<num){
            if (num%count == 0){
                divisor--;
                break;
            }
            count++;
        }
    }
    cout<<divisor;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();

    return 0;
}