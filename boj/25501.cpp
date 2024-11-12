#include <iostream>
#include <string>

using namespace std;

pair<bool, int> recursion(string &S, int l, int r){
    if (l>=r){
        return make_pair(true, l+1);
    }
    else if (S[l]!=S[r]){
        return make_pair(false, l+1);
    }
    else return recursion(S, l+1, r-1);
}

pair<bool, int> ispalindrom(string &S){
    return recursion(S, 0, S.size()-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    for (int i=0; i<N; i++){
        string S;
        cin>>S;
        // ispalindrom(S)
        cout<<ispalindrom(S).first<<" "<<ispalindrom(S).second<<"\n";
    }

    return 0;
}