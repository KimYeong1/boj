#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,k;
    cin>>N>>k;
    int boonmo = 1;
    int boonja = 1;
    int count=k;
    
    for (int i=N; i > N-k; i--){

        boonmo *= i;

    }

    for (int i=k; i>0; i--){
        boonja *= i;
    }

    cout<<boonmo/boonja;
    return 0;
}