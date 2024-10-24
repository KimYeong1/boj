#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;

    long long count = 0;
    long long i = 666;  // 처음 숫자

    while (true) {
        string new_word = to_string(i);
        // "666"이 포함되는지 검사
        if (new_word.find("666") != string::npos) {
            count++;
            // N번째 숫자라면 출력하고 종료
            if (count == N) {
                cout << i;
                return 0;
            }
        }
        i++;  // 다음 숫자로 이동
    }

    return 0;
}
