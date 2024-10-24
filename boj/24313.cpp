#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a0, a1;
    int c, n0;
    cin>>a0>>a1;
    cin>>c>>n0;
    int Fn = a0*n0+a1;
    int Gn = c*n0;
    if (Fn>Gn) cout<<0;
    else{
        if (a0>c) cout<<0;
        else cout<<1;
    }
    return 0;
}
