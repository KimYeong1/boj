#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int> check45(int h, int m){
    if (m<45){
        if (h!=0){
            int hour=h-1;
            int minute= 60-(45-m);
            return make_tuple(hour, minute);
        }
        else{
            int hour = 23;
            int minute = 60-(45-m);
            return make_tuple(hour, minute);
        }
    }
    else return make_tuple(h, m-45);
}

int main(){
    int h, m;
    cin>>h>>m;
    int a, b;
    tie(a,b) = check45(h, m);
    cout<<a<<" "<<b;


    return 0;
}