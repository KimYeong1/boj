// #include <iostream>
// #include <string>

// using namespace std;

// int input(){
//     string S;
//     string alphabet = "ABCDEFGHIJKLNMOPQRSTUVWXYZ";
//     cin>>S;
//     int time_count = 0;
//     for (int i=0; i<S.length(); i++){
//         if (S[i] == 'A' || 'B' || 'C'){
//             S[i] = '2';
//         }
//         else if (S[i] == 'D' || 'E' || 'F'){
//             S[i] = '3';
//         }
//         else if (S[i]== 'G' || 'H' || 'I'){
//             S[i] = '4';
//         }
//         else if (S[i]== 'J' || 'K' || 'L'){
//             S[i] = '5';
//         }
//         else if (S[i]== 'M' || 'N' || 'O'){
//             S[i] = '6';
//         }
//         else if (S[i]== 'P' || 'Q' || 'R' || 'S'){
//             S[i] = '7';
//         }
//         else if (S[i]= 'T' || 'U' || 'V'){
//             S[i] = '8';
//         }
//         else if (S[i] == 'W' || 'X' || 'Y' || 'Z'){
//             S[i] = '9';
//         }
//         int time = int(S[i])-1 + 2;
//         time_count = time_count + time;
//     }
//     cout<<time_count;
// }


// int main(){
//     input();

//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int input(){
    string S;
    cin >> S;
    int time_count = 0;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] >= 'A' && S[i] <= 'C') {
            time_count += 3;
        }
        else if (S[i] >= 'D' && S[i] <= 'F') {
            time_count += 4;
        }
        else if (S[i] >= 'G' && S[i] <= 'I') {
            time_count += 5;
        }
        else if (S[i] >= 'J' && S[i] <= 'L') {
            time_count += 6;
        }
        else if (S[i] >= 'M' && S[i] <= 'O') {
            time_count += 7;
        }
        else if (S[i] >= 'P' && S[i] <= 'S') {
            time_count += 8;
        }
        else if (S[i] >= 'T' && S[i] <= 'V') {
            time_count += 9;
        }
        else if (S[i] >= 'W' && S[i] <= 'Z') {
            time_count += 10;
        }
    }

    cout << time_count << endl;
    return time_count;
}

int main() {
    input();
    return 0;
}
