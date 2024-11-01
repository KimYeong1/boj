#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    int N;
    cin>>N;
    int count = 0;
    vector<string> arr;
    for (int i=0; i<N; i++){
        cin>>S;
        for (int j=0; j<S.size(); j++){
            if (count<0){
                break;
            }
            if (S[j]=='('){
                count++;
            }
            else if (S[j]==')'){
                count--;
            }
        }
        if (count==0){
            arr.push_back("YES");
        }
        else{
            arr.push_back("NO");
            count = 0;
        }
    }
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}