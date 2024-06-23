#include <iostream>
#include <vector>

using namespace std;

void input(){
    int submit_person[30];
    for (int i=0; i<30; i++){
        submit_person[i]=i+1;
    }
    int n;
    for (int i=0; i<28; i++){
        cin>>n;
        submit_person[n-1]=0;
    }

    for (int i=0; i<30; i++){
        if(submit_person[i]!=0){
            cout<<submit_person[i]<<"\n";
        }
    }

}

int main(){
    input();
    return 0;
}
