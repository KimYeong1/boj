#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin>>N;
    map<int, int> m;
    int num;
    for (int i=0; i<N; i++){
        cin>>num;
        if (m.find(num)==m.end()){    // map key에 num이 없으면 num을 key로 넣고 value로 0을 넣음
            m.insert(make_pair(num, 1));    // insert랑 []를 사용한 map에 key 대입하는 것에 대한 차이 명확히 인지해두기.
        }
        else{
            m[num]++;    // map에 key가 이미 존재하면, 해당 key의 value값을 ++함
        }
    }
    cin>>M;
    for (int i=0; i<M; i++){
        cin>>num;
        cout<<m[num]<<" ";
    }
    return 0;
}