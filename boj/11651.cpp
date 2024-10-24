#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    vector<pair<int, int>> arr;
    pair<int, int> xy;
    for (int i=0; i<N; i++){
        cin>>xy.second>>xy.first;
        arr.push_back(xy);
    }
    sort(arr.begin(), arr.end());
    for (int i=0; i<N; i++){
        cout<<arr[i].second<<" "<<arr[i].first<<"\n";
    }

    return 0;
}