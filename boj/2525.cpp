#include <iostream>

using namespace std;

int hourCheck(int hour, int minute, int time){
    int check = (minute + time)/60;
    if (check >= 1) return hour+check; // 작업시간+현재시간의 분이 60이 넘어가면, 몫만큼 hour에 +해줌
    else return hour;
}
int minuteCheck(int minute, int time){
    int check = (minute+time)/60;
    if (check>0) return (minute+time)%60; // 작업시간+현재시간의 분이 60이 넘어가면, 60으로 나눴을 때 나머지가 현재시간의 분이 됨을 이용
    else return minute+time;
}


int main(){
    int now_hour, now_minute, work_time;
    cin>>now_hour>>now_minute;
    cin>>work_time;
    int new_hour = hourCheck(now_hour, now_minute, work_time);
    int new_minute = minuteCheck(now_minute, work_time);
    if (new_hour>=24) new_hour = new_hour%24;               // 24시가 넘어가면 00시로 update
    if (new_minute>=60) new_minute = new_minute%60;         // 60분이 넘어가면 00분으로 update

    cout<<new_hour<<" "<<new_minute;

    return 0;
}