#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin>>N;
    string copy = to_string(N);
    int arr[copy.size()];
    for (int i=0; i<copy.size(); i++){
        arr[i] = copy[i]-'0';
    }

    sort(arr, arr+copy.size(), greater<int>());
    for (int i = 0; i<copy.size(); i++){
        cout<<arr[i];
    }
    return 0;
}