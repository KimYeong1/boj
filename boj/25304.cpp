#include <iostream>

using namespace std;

string input(){
    int X;
    int N;
    int a;
    int b;
    int multiple_a_b = 0;
    cin>>X; // �� �ݾ�
    cin>>N; // ���� ����
    for (int i=0; i<N; i++){ // ���� ������ŭ cin�� ���;���
        cin>>a>>b;
        multiple_a_b += a*b; // a�� b�� ���� ����ϰ� ������.
        // X�� ���ϱ� ����
    }
    if (multiple_a_b == X){
        return "Yes";
    }
    else{
        return "No";
    }
}


int main(){
    cout<<input();
    return 0;
}