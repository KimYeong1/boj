#include <iostream>

using namespace std;

int hourCheck(int hour, int minute, int time){
    int check = (minute + time)/60;
    if (check >= 1) return hour+check; // �۾��ð�+����ð��� ���� 60�� �Ѿ��, ��ŭ hour�� +����
    else return hour;
}
int minuteCheck(int minute, int time){
    int check = (minute+time)/60;
    if (check>0) return (minute+time)%60; // �۾��ð�+����ð��� ���� 60�� �Ѿ��, 60���� ������ �� �������� ����ð��� ���� ���� �̿�
    else return minute+time;
}


int main(){
    int now_hour, now_minute, work_time;
    cin>>now_hour>>now_minute;
    cin>>work_time;
    int new_hour = hourCheck(now_hour, now_minute, work_time);
    int new_minute = minuteCheck(now_minute, work_time);
    if (new_hour>=24) new_hour = new_hour%24;               // 24�ð� �Ѿ�� 00�÷� update
    if (new_minute>=60) new_minute = new_minute%60;         // 60���� �Ѿ�� 00������ update

    cout<<new_hour<<" "<<new_minute;

    return 0;
}