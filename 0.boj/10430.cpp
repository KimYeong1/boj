#include <iostream>

using namespace std;

int first(int a, int b, int c){
    return (a+b)%c;
}

int second(int a, int b, int c){
    return ((a%c)+(b%c))%c;
}
int third(int a, int b, int c){
    return (a*b)%c;
}

int fourth(int a, int b, int c){
    return ((a%c)*(b%c))%c;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<first(a,b,c)<<"\n"<<second(a,b,c)<<"\n"<<third(a,b,c)<<"\n"<<fourth(a,b,c);
    return 0;
}