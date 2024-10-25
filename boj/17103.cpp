#include <iostream>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

vector<int> countArr;
bool arr[1000001];
int num = 1000000;
set<int> primeNumSet;

void primeNumberSieve(){
    for (int i=2; i<=num; i++){
        arr[i] = true;
    }
    for (int i=2; i<=num; i++){
        if (arr[i]==false) continue;
        for (int j=i+i; j<=num; j+=i){
            arr[j] = false;
        }
    }
    // for (int i=2; i<=num; i++){
    //     if (arr[i]!=0) primeNumSet.insert(arr[i]);
    // }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    int num;
    primeNumberSieve();
    for (int i=0; i<N; i++){    // 100
        cin>>num;
        int count = 0;
        for (int j=2; j<=num/2; j++){    // 1000
            if (arr[j]&&arr[num-j]) count++;
            // if (primeNumSet.find(num-j)!=primeNumSet.end() && primeNumSet.find(j)!=primeNumSet.end()){
            //     count++;
            // }
        }
        countArr.push_back(count);
    }

    for (int i=0; i<countArr.size(); i++){
        cout<<countArr[i]<<"\n";
    }
    return 0;
}