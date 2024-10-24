#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, w, h;
    cin>>x>>y>>w>>h;
    int x_to_w = w-x;
    int y_to_h = h-y;
    int minimum_x, minimum_y;
    if (x_to_w < x) minimum_x = x_to_w;
    else minimum_x = x;
    if (y_to_h < y) minimum_y = y_to_h;
    else minimum_y = y;
    if (minimum_x > minimum_y) cout<<minimum_y;
    else cout<<minimum_x;
}