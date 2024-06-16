#include <iostream>
#include <vector>

using namespace std;

void input(){
    vector<int> A, B, sum;
    int a, b;
    while (true){
        cin>>a>>b;
        if (a==0 && b == 0){
            break;
        }
        A.push_back(a);
        B.push_back(b);
        sum.push_back(a+b);
    }
    for (int j=0; j<sum.size(); j++){
        cout<<sum[j]<<"\n";
    }
}

int main(){
    input();
    return 0;
}