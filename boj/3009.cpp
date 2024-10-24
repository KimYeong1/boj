#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,C,D,E,F;
    cin>>A>>B>>C>>D>>E>>F;
    int output1, output2;
    if (A==C) output1 = E;
    else if (C==E) output1 = A;
    else if (A==E) output1 = C;

    if (B==D) output2 = F;
    else if (D==F) output2 = B;
    else if (B==F) output2 = D;

    cout<<output1<<" "<<output2;

    return 0;
}