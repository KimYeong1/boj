#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    int x, y;
    vector<pair<int, int>> arr;
    pair<int, int> xy;
    for (int i=0; i<N; i++){
        cin>>xy.first>>xy.second;
        arr.push_back(xy);
    }

    sort(arr.begin(), arr.end());
    for (int i=0; i<N; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }

    return 0;
}