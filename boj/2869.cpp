#include <iostream>
#include <cmath>

using namespace std;

void input(){
    int A, B, V;
    cin >> A >> B >> V;
    
    int daycount = (V - A) / (A - B);
    if ((V - A) % (A - B) != 0) {
        daycount++;
    }
    daycount++;
    cout << daycount;
}

int main(){
    input();
    return 0;
}
