#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d,e,f;        // y=999와 y=x-999가 만날 때 999*2일떄가 x의 최대범위, 그럼 반대로 y도 999*2

    cin>>a>>b>>c>>d>>e>>f;
    for (int i=-2000; i<2000; i++){
        for (int j=-2000; j<2000; j++){
            if (a*i+b*j==c){
                if (d*i+e*j==f){
                    cout<<i<<" "<<j;
                }
            }
        }
    }
    return 0;
}