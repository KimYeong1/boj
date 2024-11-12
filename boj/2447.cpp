#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> V;

void recursion(int x, int y, int N){
    
    if (N==1){
        cout<<'*';
    }
    else if (x/(N/3)%3==1 && y/(N/3)%3==1){
        cout<<' ';
    }
    else recursion(x, y, N/3);

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin>>N;

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            recursion(i, j, N);
        }
        cout<<"\n";
    }
    return 0;
}