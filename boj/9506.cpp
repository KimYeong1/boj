#include <iostream>

using namespace std;

void input(){
    int N;
    while (true){
        cin>>N;
        if (N == -1)    break;

        int number = 0;
        int count = 1;
        int amount = 0;
        while (count<N){
            if (N%count==0){
                number++;
                amount += count;
            }
            count++;
        }

        int iterable = 1;
        int idx = 0;
        int* divisor = new int[number];
        while (iterable<N){
            if (N%iterable==0){
                divisor[idx++] = iterable;
            }
            iterable++;
        }

        if (amount!=N){
            cout<<N<<" is NOT perfect."<<"\n";
        }
        else{
            cout<<N<<" = ";
            for (int i=0; i<number; i++){
                cout<<divisor[i];
                if (i!=number-1){
                    cout<<" + ";
                }
            }
            cout<<"\n";
        }
        delete[] divisor;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}