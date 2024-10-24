#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    int X,Y;
    int minimum_X = 10000, minimum_Y = 10000, maximum_X = -10000, maximum_Y = -10000;
    for (int i=0; i<N; i++){
        cin>>X>>Y;
        if (minimum_X>X) minimum_X = X;
        if (maximum_X<X) maximum_X = X;
        if (minimum_Y>Y) minimum_Y = Y;
        if (maximum_Y<Y) maximum_Y = Y;
    }
    if (N==1){
        cout<<0;
        return 0;
    }
    cout<<(maximum_X-minimum_X)*(maximum_Y-minimum_Y);

    return 0;
}