#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    else return gcd(b, a%b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int num1, num2;
    cin>>N;

    vector<long long> arr;
    for (int i=0; i<N; i++){
        cin>>num1>>num2;
        int minimum = gcd(num1, num2);
        arr.push_back(num1*num2/minimum);
    }
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}