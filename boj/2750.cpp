#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin>>N;

    int num;
    vector<int> input;
    for (int i=0; i<N; i++){
        cin>>num;
        input.push_back(num);
    }
    
    sort(input.begin(), input.end());
    for (int i=0; i<N; i++){
        cout<<input[i]<<"\n";
    }
    
    return 0;
}