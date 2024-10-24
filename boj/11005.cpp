#include <iostream>
#include <string>

using namespace std;

string change(int &N, int &B){
    char number;
    string answer = "";         // 초기화를 ""이렇게 해줘야할 지, 아니면 선언만 해야할 지
    while (N>0){
        if (N%B<10) number = N%B+'0'; // 10보다 작은 수가 나오면 그 수 그대로 (char형)
        else number = (N%B-10)+ 'A'; // 10보다 크거나 같은 수면 알파벳으로
        answer.push_back(number);
        N = N/B; // 나눌 수 새로 갱신
    }
    return answer;
}

void input(){
    int B;
    int N;
    cin>>N>>B;
    string answer = change(N, B);
    string temp = answer;
    for (int i=0; i<answer.length(); i++){
        temp[i] = answer[answer.length()-1-i];
    }
    cout<<temp;
}

int main(){
    input();
    return 0;
}