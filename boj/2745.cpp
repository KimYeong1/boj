#include <iostream>
#include <string>

using namespace std;

int change(string &N, int &B){
    char number;
    int temp = B;
    int amount = 0;
    for (int i=N.length()-1; i>=0; i--){
        
        // string N을 한글자씩 int로 바꿈
        if (N[i]-'0' <10) number = N[i]-'0';
        else number = (N[i]-'A')+10;

        // 몇번째 반복인지에 따라 B진법의 몇승인지 달라짐
        if (i==N.length()-1) B=1;
        else B = B*temp;

        amount += (number*B);
    }
    return amount;
}

int input(){
    string N;
    int B;
    cin>>N>>B;
    int answer = change(N, B);
    return answer;
}

int main(){
    int answer = input();
    cout<<answer;
    return 0;
}