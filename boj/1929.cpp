#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M,N;
    cin>>M>>N;
    vector<int> arr;
    for (int i=M; i<=N; i++){
        
        bool lsprimenum = true;
        if (i==1) continue;
        else if(i==2 || i==3){
            arr.push_back(i);
            continue;
        }
        for (int j=2; j<=sqrt(i); j++){
            if (i%j==0){
                lsprimenum = false;
                break;
            }
        }
        if (!lsprimenum){
            continue;
        }
        else arr.push_back(i);
    }

    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}