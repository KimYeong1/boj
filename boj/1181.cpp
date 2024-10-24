#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    vector<pair<int, string>> arr;
    pair<int, string> input;

    for (int i=0; i<N; i++){
        cin>>input.second;
        input.first = input.second.length();
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());

    cout<<arr[0].second<<"\n";
    for (int i=1; i<N; i++){
        if (arr[i].second==arr[i-1].second){
            continue;
        }
        cout<<arr[i].second<<"\n";
        
    }
    return 0;
}