#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    int num;
    int order = 1;
    stack<int> S;
    for (int i=0; i<N; i++){
        cin>>num;

        if (num == order){
            order++;
            continue;
        }

        while (!S.empty()&&S.top()==order){
            S.pop();
            order++;
        }

        S.push(num);

    }
    while (!S.empty()&&S.top()==order){
        S.pop();
        order++;
    }
    if (S.empty()) cout<<"Nice";
    else cout<<"Sad";


    return 0;
}