#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binary_check(vector<int> &array, int size, int target){
    int start = 0;
    int end = size-1;
    int mid;

    while (start<=end){
        mid = (start+end)/2;
        if (target == array[mid]) return 1;
        else if(target>array[mid]){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    cin>>N;
    int temp;
    vector<int> arr;
    for (int i=0; i<N; i++){
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());
    
    cin>>M;
    int target;
    for (int i=0; i<M; i++){
        cin>>target;
        cout<<binary_check(arr, N, target)<<" ";

    }
    return 0;
}