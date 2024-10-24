#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    long long amount = 0;
    for (int i=1; i<=n-1; i++){
        amount+=i;
    }
    cout<<amount<<"\n"<<2;
    return 0;
}