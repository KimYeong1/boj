#include <iostream>

using namespace std;

int check(int a, int b){
    if (a>0 && b>0){return 1;}
    else if (a<0 && b>0){return 2;}
    else if (a<0 && b<0){return 3;}
    else if (a>0 && b<0){return 4;}
}

int main(){
    int a, b;
    cin>>a;
    cin>>b;
    int c = check(a,b);
    cout<<c;



    return 0;
}