#include <iostream>
#include <vector>

using namespace std;

void input(){
    int N,M; // �ٱ��� ���� N��, try ���� M
    cin>>N>>M;
    vector<int> basket(N); // �ٱ��Ͼȿ� �� ���� ���� ������ ���� �迭 ����
    int i, j, k;
    for (int count = 0; count<N; count++){
        basket[count]=0;
    }

    for (int count = 0; count<M; count++){
        cin>>i>>j>>k;
        for (int g=i; g<=j; g++){
            basket[g-1]=k;
        }
    }

    for (int a=0; a<N; a++){
        cout<<basket[a]<<" ";
    }




}

int main(){
    input();
    return 0;
}