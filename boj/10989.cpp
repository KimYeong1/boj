#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    int num;
    int count[10001] = {0};
    for (int i=0; i<N; i++){
        cin>>num;
        count[num]++;
    }
    for (int j=1; j<10001; j++){
        for (int i=0; i<count[j]; i++){
            cout<<j<<"\n";
        }
        
    }
    return 0;
}