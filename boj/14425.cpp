#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin>>N>>M;
    set<string> S;
    string temp;
    for (int i=0; i<N; i++){
        cin>>temp;
        S.insert(temp);
    }
    int count =0;
    for (int i=0; i<M; i++){
        cin>>temp;
        if (S.find(temp)!=S.end()){
            count++;
        }
    }
    cout<<count;
    return 0;
}