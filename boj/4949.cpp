#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    vector<string> arr;
    
    while (true){
        getline(cin, S);

        bool isperfect = true;
        stack<char> stac;

        if (S=="."){
            break;
        }
        for (int j=0; j<S.size(); j++){
            if (S[j]=='('){
                stac.push('(');
            }
            else if (S[j]=='['){
                stac.push('[');
            }
            else if (S[j]==')'){
                if (!stac.empty()&&stac.top()=='('){
                    stac.pop();
                }
                else{ 
                    isperfect = false;
                    break;
                }
            }
            else if (S[j]==']'){
                if (!stac.empty()&&stac.top()=='['){
                    stac.pop();
                }
                else{
                    isperfect = false;
                    break;
                }
            }
            else continue;
        }

        if (stac.empty() && isperfect){
            arr.push_back("yes");
        }
        else arr.push_back("no");
    }

    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}