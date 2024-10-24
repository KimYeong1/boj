#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>

using namespace std;

// struct compare{
//     bool operator()(const string &Left, const string &Right) const {
//         return Left > Right;
//     }
// };

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    string name, EorL;
    set<string, greater<string>> output;
    for (int i=0; i<N; i++){
        cin>>name>>EorL;
        output.insert(name);
        if (EorL=="leave"){
            output.erase(name);
        }
    }
    for (set<string>::iterator it=output.begin(); it!=output.end(); it++){
        cout<<*it<<"\n";
    }

    return 0;
}