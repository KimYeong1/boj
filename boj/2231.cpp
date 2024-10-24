#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    bool lsexist = false;
    for (int i=0; i<N; i++){

        vector<int> array;
        int amount = 0;
        int n=i;
        while (true){
            if (n/10==0){
                array.push_back(n);
                break;
            }
            array.push_back(n%10);
            n /= 10;
        }

        for (int j=0; j<array.size(); j++){
            amount += array[j];
        }
        if (amount + i == N){
            lsexist = true;
            cout<<i;
            return 0;
        }
        else continue;
        
    }
    if (!lsexist) cout<<0;

    
    return 0;
}