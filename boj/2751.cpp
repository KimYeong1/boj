#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin>>N;

    long long num[N];
    for (long long i=0; i<N; i++){
        cin>>num[i];
    }
    sort(num, num+N);
    for (long long i=0; i<N; i++){
        cout<<num[i]<<"\n";
    }

    return 0;
}