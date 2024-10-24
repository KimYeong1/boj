#include <iostream>
#include <vector>

using namespace std;

void input(){
    int M,N;
    cin>>M>>N;
    vector<int> primeNumber;
    for (int i=M; i<=N; i++){
        bool ls_primeNumber = true;
        int count = 2;
        while (count<i){
            if (i%count == 0){
                ls_primeNumber = false;
                break;
            }
            count++;
        }
        if (!ls_primeNumber) continue;
        else{
            if (i!=1) primeNumber.push_back(i);
        }
            
    }
    int amount = 0;
    for (int i=0; i<primeNumber.size(); i++){
        amount += primeNumber[i];
    }
    if (primeNumber.size() == 0){
        cout<<-1;
    }
    else    cout<<amount<<"\n"<<primeNumber[0];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}