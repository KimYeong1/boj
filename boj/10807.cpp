#include <iostream>
#include <vector>

using namespace std;

int input(){
    int N, input, v;
    int output=0;
    vector<int> array;
    cin>>N;
    for (int i=0; i<N; i++){
        cin>>input;
        array.push_back(input);
    }
    cin>>v;
    for (int j=0; j<N; j++){
        if (array[j]==v){
            output++;
        }
    }
    return output;
}

int main(){
    cout<<input();
    return 0;
}