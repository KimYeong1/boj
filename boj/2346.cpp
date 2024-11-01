#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<pair<int, int>> dq;
    int N;
    cin>>N;
    int num;
    for (int i=0; i<N; i++){
        cin>>num;
        dq.push_back(make_pair(i+1, num));  // 풍선 번호, 풍선 안의 수
    }

    while (!dq.empty()){
        int val = dq.front().second;
        cout<<dq.front().first<<" ";
        dq.pop_front();

        if (dq.empty()){
            break;
        }

        if (val>0){
            for (int j=0; j<val-1; j++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else{
            for (int j=0; j<-val; j++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}