#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> A;
int cnt = 0;
int k;  // 종료를 위한 전역변수로 선언
int value;  // 답 출력을 위한 전역변수 선언

void merge(vector<int> &A, int p, int q, int r){
    int i = p;
    int j = q+1;
    vector<int> tmp;
    while (i<=q && j<=r){
        if (A[i] <= A[j]){
            tmp.push_back(A[i++]);
        }
        else tmp.push_back(A[j++]);
    }
    while (i<=q){
        tmp.push_back(A[i++]);
    }
    while (j<=r){
        tmp.push_back(A[j++]);
    }
    i=p;
    int t = 0;
    while (i<=r){
        cnt++;
        A[i++] = tmp[t++];
        if (cnt==k){
            cout<<A[i-1]<<"\n";
            return;
        }
    }
}

void merge_sort(vector<int> &A, int p, int r){
    if (p<r){
        int q = (p+r)/2;        // q는 p와 r의 중간 지점
        merge_sort(A, p, q);    // 전반부 정렬
        merge_sort(A, q+1, r);  // 후반부 정렬
        merge(A, p, q, r);      // 병합
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N>>k;
    int temp;
    for (int i=0; i<N; i++){
        cin>>temp;
        A.push_back(temp);
    }
    merge_sort(A, 0, N-1);
    if (cnt<k){
        cout<<-1;
    }
    return 0;
}