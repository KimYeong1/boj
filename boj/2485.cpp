#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if (b==0){
        return a;
    }
    else return gcd(b, a%b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    long long location;
    vector<long long> distance;
    vector<long long> tree;
    for (int i=0; i<N; i++){
        cin>>location;
        tree.push_back(location);   // N개
    }
    for (int i=0; i<N-1; i++){
        distance.push_back(tree[i+1]-tree[i]);  // N-1개
    }
    
    int temp = gcd(distance[0],distance[1]);
    for (int i=0; i<distance.size()-1; i++){
        temp = gcd(temp, distance[i+1]);
    }
    int count = 0;
    for (int i=0; i<distance.size(); i++){
        count += (distance[i]/temp)-1;
    }
    cout<<count;

    return 0;
}