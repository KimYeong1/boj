#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    cin>>S;
    int length = S.length();

    set<string> part_set;
    // string temp;

    for (int i=0; i<length; i++){
        string temp;
        for (int j=i; j<length; j++){
            temp = temp+S[j];
            part_set.insert(temp);
        }
    }

    cout<<part_set.size();


    return 0;
}
