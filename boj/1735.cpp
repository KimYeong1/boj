#include <iostream>

using namespace std;

int gcd(int a, int b){
    if (b==0){
        return a;
    }
    else return gcd(b, a%b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A,B,C,D;
    cin>>A>>B;
    cin>>C>>D;
    int boonja = A*D+C*B;
    int boonmo = B*D;
    int dividor = gcd(boonja, boonmo);
    cout<<boonja/dividor<<" "<<boonmo/dividor;
    return 0;
}