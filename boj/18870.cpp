#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if (a.first==b.first){
        return a.second<b.second;
    }
    return a.first<b.first;
}

bool second_Compare(pair<int, int> a, pair<int, int> b){
    return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;

    vector<pair<int, int>> arr;
    pair<int, int> value_index;
    for (int i=0; i<N; i++){
        cin>>value_index.first;
        value_index.second = i;
        arr.push_back(value_index);
    }
    
    sort(arr.begin(), arr.end(), compare);  // 입력받은 수 기준으로 오름차순 정렬

    vector<int> new_array;
    new_array.push_back(0);
    int count = 0;
    for(int i=1; i<N; i++){
        if (arr[i].first==arr[i-1].first){  // 이전 값과 현재 값이 같다면 현재 count값 그대로
            new_array.push_back(count);
            continue;
        }
        else{
            count++;                        // 이전 값과 현재 값이 다르다면 count값을 올려줌. 이는 곧 현재 수 보다 중복없이 작은 수의 개수를 나타냄.
            new_array.push_back(count);
        }
    }

    for (int i=0; i<N; i++){
        arr[i].first = new_array[i];
    }


    sort(arr.begin(), arr.end(), second_Compare);
    for (int i=0; i<N; i++){
        cout<<arr[i].first<<" ";
    }

    return 0;
}

