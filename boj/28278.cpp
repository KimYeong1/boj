#include <iostream>
#include <vector>

using namespace std;

struct Stack{
    vector<int> arr;

    void push(int data){
        arr.push_back(data);
    }

    void pop(){
        if (!empty()) arr.pop_back();
    }

    int top(){
        if (!empty()) return arr[arr.size()-1];
        else return -1;
    }

    bool empty(){
        if (arr.size()==0){
            return true; 
        }
        else return false;
    }

    int size(){
        return arr.size();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;
    int num;
    Stack S;
    for (int i=0; i<N; i++){
        cin>>num;
        if (num == 1){
            int data;
            cin>>data;
            S.push(data);
        }
        else if (num == 2){
            if (!S.empty()){
                int temp = S.top();
                cout<<temp<<"\n";
                S.pop();
            }
            else cout<<-1<<"\n";
        }
        else if (num==3){
            cout<<S.size()<<"\n";
        }
        else if (num==4){
            if (S.empty()) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
        else if (num==5){
            if (!S.empty()){
                cout<<S.top()<<"\n";
            }
            else cout<<-1<<"\n";
        }
    }
    return 0;
}