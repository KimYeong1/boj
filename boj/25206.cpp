#include <iostream>
#include <string>

using namespace std;

float ScoreChangeInt(string &grade){
    float score = 0.0;

    if (grade[0]=='A') score = 4.0;
    else if (grade[0]=='B') score = 3.0;
    else if (grade[0]=='C') score = 2.0;
    else if (grade[0]=='D') score = 1.0;
    else if (grade[0]=='F'){
        score = 0.0; 
        return score;
    }

    if (grade[1]=='+'){
        score = score+0.5;
        return score;
    }
    else return score;
}


float input(){
    string subject, grade;
    int num[20] = {0, };
    float credits;
    int boonMo = 0;
    float score_ = 0.0;
    float score[20] = {0.0,};
    float amount = 0;
    for (int i=0; i<20; i++){
        cin>>subject>>credits>>grade;
        if (grade == "P"){
            continue;
        }
        else{
            score_ = ScoreChangeInt(grade);
        }
        boonMo += credits;
        float score = score_ * credits;
        amount = amount + score;
    }
    float average = amount/boonMo;
    return average;

}

int main(){
    cout<<input();
    return 0;
}

