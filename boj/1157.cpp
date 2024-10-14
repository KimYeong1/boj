#include <iostream>
#include <string>

using namespace std;

void input() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'A']++;
    }

    int max_count = 0;
    char max_alphabet = '?';
    bool duplicate = false;

    for (int i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_alphabet = 'A' + i;
            duplicate = false;
        } else if (count[i] == max_count) {
            duplicate = true;
        }
    }

    if (duplicate) {
        cout << "?" << endl;
    } else {
        cout << max_alphabet << endl;
    }
}

int main() {
    input();
    return 0;
}
