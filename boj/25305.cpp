#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, k;
    cin>>N>>k;

    int score[N];
    for (int i=0; i<N; i++){
        cin>>score[i];
    }

    sort(score, score+N, greater<int>());

    cout<<score[k-1];

    return 0;
}