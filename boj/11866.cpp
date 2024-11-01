#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> Q;
    vector<int> arr;

    int N,k;
    cin>>N>>k;
    for (int i=1; i<=N; i++){
        Q.push(i);
    }

    int count = 1;
    while (!Q.empty()){
        int num = Q.front();
        if (count%k==0){
            arr.push_back(num);
        }
        else{
            Q.push(Q.front());
        }
        Q.pop();
        count++;
    }

    cout<<"<";
    for (int i=0; i<arr.size()-1; i++){
        cout<<arr[i]<<", ";
    }
    cout<<arr[arr.size()-1]<<">";

    return 0;
}
