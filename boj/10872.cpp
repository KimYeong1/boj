#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num = 1;
    int N;
    cin>>N;
    for (int i=N; i>0; i--){
        num *= i;
        // cout<<num<<"\n";
    }
    cout<<num;

    return 0;
}