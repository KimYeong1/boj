#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

bool compare(const string &a, const string &b){
    return a < b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin>>N>>M;
    map<string, int> name;
    string S;
    for (int i=0; i<N; i++){
        cin>>S;
        name.insert(make_pair(S, 0));
    }
    int count = 0;
    vector<string> arr;
    for (int i=0; i<M; i++){
        cin>>S;
        if (name.find(S)!=name.end()){
            count++;
            arr.push_back(S);
        }
    }
    sort(arr.begin(), arr.end(), compare);
    cout<<count<<"\n";
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}