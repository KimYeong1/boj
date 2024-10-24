#include <iostream>

using namespace std;

void input(){
    int N;
    cin>>N;
    int change;
    int* Quarter = new int[N];
    int* Dime = new int[N];
    int* Nickel = new int[N];
    int* Penny = new int[N];
    for (int i=0; i<N; i++){
        cin>>change;
        Quarter[i] = change/25;
        if (Quarter[i]!=0){
            change = change%25;
        }
        Dime[i] = change/10;
        if (Dime[i]!=0){
            change = change%10;
        }
        Nickel[i] = change/5;
        if (Nickel!=0){
            change = change%5;
        }
        Penny[i] = change;
    }
    for (int i=0; i<N; i++){
        cout<<Quarter[i]<<" "<<Dime[i]<<" "<<Nickel[i]<<" "<<Penny[i]<<"\n";
    }
}

int main(){
    input();
    return 0;
}