#include <iostream>
#include <vector>
using namespace std;

void input(){
    int T;
    cin>>T;
    vector<int> A(T),B(T),sum(T);
    for (int i =0; i<T; i++){
        cin>>A[i]>>B[i];
        sum[i]=A[i]+B[i];
    }
    
    for (int i =0; i<T; i++){
        cout<<"Case #"<<i+1<<": "<<A[i]<<" + "<<B[i]<<" = "<<sum[i]<<"\n";
    }
}



int main(){
    input();
    return 0;
}