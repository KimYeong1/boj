#include <iostream>

using namespace std;



int main(){
    int a;
    string b;
    cin>>a;
    cin>>b;
    int third = b[2]-'0';
    int second = b[1]-'0';
    int first = b[0]-'0';
    cout << third*a <<"\n";
    cout << second*a <<"\n";
    cout << first*a<<"\n";
    cout << (third*a)+(second*10*a)+(first*100*a);

    return 0;
}