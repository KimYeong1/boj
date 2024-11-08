#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> s;    
    string A,B;
    int N;
    cin>>N;
    s.insert("ChongChong"); // chongchong이는 넣고 시작
    for(int i=0; i<N; i++){
        cin>>A>>B;
        if (s.find(A)!=s.end()){
            s.insert(B);
        }
        else if (s.find(B)!=s.end()) s.insert(A);
        else continue;
    }
    cout<<s.size();

    return 0;
}