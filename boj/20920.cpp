#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

bool compare(pair<string, int> a, pair<string, int> b){
    if (a.second==b.second){
        if (a.first.size()==b.first.size()){
            return a.first<b.first; // 길이가 같다면 사전순으로 a부터 배치
        }

        return a.first.size()>b.first.size();   // 빈도수가 같다면 길이가 긴 걸 앞에 배치
    }
    return a.second>b.second;   // 빈도수가 높을 수록 앞에 배치
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    cin>>N>>M;
    string S;
    map<string, int> m;    // 빈도수 담기 위한 map 선언
    vector<pair<string, int>> vp;  // 정렬을 위한 vector pair 선언
    for (int i=0; i<N; i++){
        cin>>S;
        if (S.size()<M){
            continue;       // M보다 짧은 단어는 넘김
        }
        if (m.find(S)!=m.end()){
            m[S]++;                 // S가 m에 들어있다면, 빈도수 ++
        }
        else m.insert(make_pair(S, 1));     // S가 m에 없다면, S를 key에 넣고 value를 1 더함.
    }

    for (auto it=m.begin(); it!=m.end(); ++it){
        vp.push_back(make_pair(it->first, it->second)); // m에 들어있는 거 vp로 복사
    }

    sort(vp.begin(), vp.end(), compare);

    for (int i=0; i<vp.size(); i++){
        cout<<vp[i].first<<"\n";
    }

    return 0;
}