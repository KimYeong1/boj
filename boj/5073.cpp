#include <iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        int a,b,c;
        cin>>a>>b>>c;
        if(a == 0 && b == 0 && c == 0){
            break;
        }
        if(a == b && b == c && c == a ){
            cout<<"Equilateral\n";
        }
        else if(a >= b+c || b >= c + a || c >= a + b){
            cout<<"Invalid\n";
        }
        else if(a == b || b == c || c == a){
            cout<<"Isosceles\n";
        }
        else if(a != b && b != c && c != a){
            cout<<"Scalene\n";
        }
    }
  return 0;
}