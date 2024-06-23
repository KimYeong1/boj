#include <iostream>

using namespace std;

int comparison(int (&a)[10]){
    int count = 1;
    for (int i=1; i<10; i++){
        if (a[0] != a[i]){
            count++;
        }
    }
    return count;
}

void input(){
    int a[10] = {0, };
    int input;
    // int b[10] = {0, };
    for (int i=0; i<10; i++){
        cin>>input;
        a[i] = input%42;
    }
    int count = comparison(a);
    cout<<count;
}



int main(){
    input();
    return 0;
}