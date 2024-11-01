#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin>>N;
    int num;
    deque<int> data_strucutre;
    vector<int> temp;
    for (int i=0; i<N; i++){
        cin>>num;
        temp.push_back(num);

    }

    for (int i=0; i<N; i++){
        cin>>num;
        if (temp[i]==0){
            data_strucutre.push_back(num);
        }
    }
    temp.clear();
    cin>>M;
    for (int i=0; i<M; i++){
        cin>>num;
        cout<<data_strucutre.back()<<" ";
        data_strucutre.pop_back();
        data_strucutre.push_front(num);
    }

    return 0;
}