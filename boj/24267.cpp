#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    long long amount = 0;
    vector<long long> amount_array;
    for (long long i=1; i<=n-2; i++){
        amount += i;
        amount_array.push_back(amount);
    }
    long long amount_array_amount = 0;
    for (long long i=0; i<amount_array.size(); i++){
        amount_array_amount+=amount_array[i];
    }
    cout<<amount_array_amount<<"\n"<<3;

    return 0;
}

// 첫째줄 n-2번 시행
// 둘째줄 1번 2번 .... n-2번 시행
// 셋째줄 j=1일때 3부터 n까지, j=2일떄 4부터 n까지, ... j=n-1일때(i=n-2) 1번시행

// i=1인경우, j=2부터 n-1번까지 시행                                                1번+2번+3번+...+(n-2)번
                                    // j=2일때 k=3부터 n까지 시행
                                    // j=3일때 k=4부터 n까지 시행
                                    // ... j=n-1일떄 k=n부터 n까지 시행

// i=2인경우, j=3부터 n-1번까지 시행
                                    // j=3일때 k=4부터 n까지 시행
                                    // j=4일때 k=5부터 n까지 시행
                                    // ... j=n-1일때 k=n부터 n까지 시행             1+2+3+...+(n-3)번 시행
// ...

// i=n-3인경우                                                                      1+2번 시행
                                    //                                
// i=n-2인경우, j=n-1번부터 n-1번까지 시행
                                    // j=n-1일때 k=n부터 n까지 시행.                1번.

// 즉, n인 경우, (1) (1+2) (1+2+3) ... (1+2+3+...+(n-2))번의 시행횟수를 가짐.
// n=7인경우, 1, 3, 6, 10, 15을 더한 값이 시행횟수.
