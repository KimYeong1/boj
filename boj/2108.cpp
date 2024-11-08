#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if (a.second == b.second){  // 빈도수가 같다면
        return a.first<b.first; // 입력값이 작은 수부터 큰 순으로 나열
    }
    return a.second>b.second;   // 빈도수가 높은 거 부터 낮은 순으로 정렬 (기본)
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, int>> vp;  // 추후 최빈값 정렬을 위해
    map<int, int> m;    // 입력값과 빈도수 체크를 위해
    vector<int> v;
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  // 벡터에 입력 순서대로 넣음
        if (m.find(temp)==m.end()){
            m.insert(make_pair(temp, 1));
        }
        else{
            m[temp]++;
        }
    }

    // 산술평균
    double sum = 0;
    for (int i=0; i<v.size(); i++){
        sum += v[i];
    }
    double avg = sum/float(N);
    int mean = round(avg);
    if (mean==-0){
        cout<<0<<"\n";
    }
    else cout<<mean<<"\n";

    // 중앙값
    sort(v.begin(), v.end());   // 기본 정렬 : 오름차순
    cout<<v[int(N/2)]<<"\n";    // 어처리 홀수라 상관 없음

    // 최빈값
    for (auto it=m.begin(); it!=m.end(); ++it){
        vp.push_back(make_pair(it->first, it->second));
    }

    int max = vp[vp.size()-1].first;
    int min = vp[0].first;              // 최빈값 정렬전 기본 오름차순 정렬되어있는 map의 자료구조를 이용해서 먼저 값 복사
    sort(vp.begin(), vp.end(), compare);
    
    // for (int i=0; i<vp.size(); i++){
    //     cout<<"("<<vp[i].first<<","<<vp[i].second<<")"<<"  ";
    // }
    if (vp[0].second == vp[1].second){
        cout<<vp[1].first<<"\n";
    }
    else cout<<vp[0].first<<"\n";

    // 범위
    cout<<max-min<<"\n";
    return 0;

}