#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<int> arr;
    while (true){
        cin>>N;
        if (N==0){
            break;
        }

        if (N==1||N==2){
            arr.push_back(1);
            continue;
        }
        int count = 0;

        for (int i=N+1; i<=2*N; i++){
            bool lsprimenum = true;
            for (int j=2; j<=sqrt(i); j++){
                if (i%j==0){
                    lsprimenum = false;
                    break;
                }
            }
            if (lsprimenum){
                count++;
            }
        }
        arr.push_back(count);
    }
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}


