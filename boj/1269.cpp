#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin>>N>>M;
    int num;
    set<int> A;
    set<int> B;
    for (int i=0; i<N; i++){
        cin>>num;
        A.insert(num);
    }

    for (int i=0; i<M; i++){
        cin>>num;
        B.insert(num);
    }

    int count = 0;
    for (set<int>::iterator it=A.begin(); it!=A.end(); ++it){
        if (B.find(*it)!=B.end()){
            count++;
        }
    }
    // }
    // for (set<int>::iterator it=B.begin(); it!=B.end(); ++it){
    //     if (A.find(*it)!=A.end()){
    //         B.erase(it);
    //     }
    // }
    cout<<A.size()+B.size()-2*count;
    return 0;
}
