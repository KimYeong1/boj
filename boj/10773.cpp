#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> S;
    int N;
    cin>>N;
    int num;
    int count = 0;
    for (int i=0; i<N; i++){
        cin>>num;
        if (num!=0){
            S.push(num);
            count+=num;
        }
        else{
            count-=S.top();
            S.pop();
        }
    }
    cout<<count;
    

    return 0;
}