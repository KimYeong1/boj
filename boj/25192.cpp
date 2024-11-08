#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    string S;
    int count = 0;
    set<string> sset;
    for (int i=0; i<N; i++){
        cin>>S;
        if(S=="ENTER"){
            sset.clear();   // 새로운 ENTER 만나는 순간 초기화
            continue;
        }
        else{
            if (sset.find(S)==sset.end()){
                sset.insert(S);
                count++;
            }
        }
    }
    cout<<count;

    return 0;
}