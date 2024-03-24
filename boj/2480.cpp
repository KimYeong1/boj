#include <iostream>
// #include <math.h>
using namespace std;

int check(int a, int b, int c){
    return max(max(a,b),c);
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    check(a,b,c);
    int amount;

    if (a!=b && b!=c && c!=a) amount = check(a,b,c)*100;
    else if (a==b && b==c) amount = 10000+(a*1000);
    else{
        if (a==b) amount = (a*100) + 1000;
        else (c*100)+1000;
    }

    cout<<amount;

    return 0;
}