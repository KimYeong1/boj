#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    // first가 나이
    return a.first<b.first;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    vector<pair<int, string>> arr;
    pair<int, string> input;
    for (int i=0; i<N; i++){
        cin>>input.first>>input.second;
        arr.push_back(input);
    }

    stable_sort(arr.begin(), arr.end(), compare);
    for (int i=0; i<N; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    }
    return 0;
}