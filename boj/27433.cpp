#include <iostream>

using namespace std;

long long factorial(int num){
    if (num<2){
        return 1;
    }
    return num * factorial(num-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    // long long result = 1;
    cout<<factorial(N);

    return 0;
}