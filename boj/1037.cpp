#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a<b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    vector<int> arr;
    int temp;
    for (int i=0; i<N; i++){
        cin>>temp;
        arr.push_back(temp);
    }    
    sort(arr.begin(), arr.end(), compare);
    long long ans;
    ans = arr[0]*arr[arr.size()-1];
    cout<<ans;

    return 0;
}

// int Uclid(int a, int b){
//     if (b==0){
//         return a;
//     }
//     else return Uclid(b, a%b);
// }

// long long minimum_multiple(long long a, long long b){
//     int gcd = Uclid (a,b);
//     long long mul = a*b;
//     return mul/gcd; // a*b가 int를 넘어갈 수도 있으니 long long으로 선언해야 할 듯
// }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N;
//     cin>>N;

//     long long a = minimum_multiple(1,1);
//     set<long long> s;  // 최소 공배수는 int형보다 클 수도 있으니 long long 선언이 맞는듯

//     for (int i=0; i<N; i++){
//         int temp;
//         cin>>temp;
//         s.insert(temp);
//         a = minimum_multiple(a, temp);  // 새 입력값이랑 이전 최소공배수 비교해가면서 최소공배수 도출
//     }

//     if (s.find(a)!=s.end()){    // find함수 쓰려고 vector 대신 set로 선언함
//         a*=2;                   // 입력값이랑 동일한 값이 최소공배수이면, 그거에 2 곱해줌
//     }
//     cout<<a;

//     return 0;
// }

