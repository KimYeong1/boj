#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long N;
    cin>>N;
    long long num;
    for (int i=0; i<N; i++){
        cin>>num;
        if (num==0 || num==1){
            cout<<2<<"\n";
            continue;
        }
        
        while (true){
            bool lsprime = true;
            for (int j=2; j<=sqrt(num); j++){
                if (num%j==0){
                    lsprime = false;
                    break;
                }
            }
            if (lsprime == true) break;
            else num++;
        }
        cout<<num<<"\n";
    }

    return 0;
}