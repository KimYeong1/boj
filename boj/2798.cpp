#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> array;
    int N,M;
    cin>>N>>M;
    int T;
    for (int i=0; i<N;i ++){
        cin>>T;
        array.push_back(T);
    }
    int sum = 0;
    int minimum = M;
    int best_solution = 0;
    for (int i=0; i<N-2; i++){
        for (int j=i+1; j<N-1; j++){
            for (int k=j+1; k<N; k++){
                sum = array[i]+array[j]+array[k];
                if (sum>M) continue;

                if (M-sum<=minimum){
                    minimum = (M-sum);
                    best_solution = sum;
                }
            }
        }
    }
    cout<<best_solution;
    return 0;
}