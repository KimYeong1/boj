#include <iostream>

using namespace std;

int pibonachi(int a1, int a2, int num){
    int a3 = a1+a2;
    // 첫 바퀴에 a3, 즉 3항까지 감. 1일때 a3, 2일때 a4, 3일때 a5니까 8일때 a10
    if (num==0){
        return a1;
    }
    else if (num==1){
        return a2;
    }

    if (num-2<=0){
        return a3;
    }
    return pibonachi(a2, a3, num-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    cout<<pibonachi(0,1,N);

    return 0;
}