#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int input[5];
    int amount = 0;
    for (int i=0; i<5; i++){
        cin>>input[i];
        amount += input[i];
    }
    amount /= 5;
    cout<<amount<<"\n";
    sort(input, input+5);
    cout<<input[2];
    return 0;
}