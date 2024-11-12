#include <iostream>
#include <string>
#include <vector>

using namespace std;

void top(int n, int now, int next, int temp){   // 현재 위치 now, 옮길 위치 next, 경유할 곳 temp
    if (n==1){
        cout<<now<<" "<<next<<"\n";
        return;
    }

    top(n-1, now, temp, next);      // n을 3번쨰로 옮기기 위해선 n-1번까지를 temp에다가 옮겨야 함
    cout<<now<<" "<<next<<"\n";     // 가장 큰 수를 3번쨰로 목적지로 옮김
    top(n-1, temp, next, now);      // temp층에 있는 n-1개를 목적지로 옮김
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    cout<<(1<<N)-1<<"\n";   // 2의 거듭제곱 -1
    top(N, 1, 3, 2);


    return 0;
}