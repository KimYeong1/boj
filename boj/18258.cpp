#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Queue{
    int *arr;
    int front, rear;

    Queue(){
        arr = new int[2000001];    // 동적 메모리 할당
        front = 0;
        rear = -1;
    }

    ~Queue(){
        delete[] arr;
    }

    void push(int data){
        arr[++rear] = data;
    }
    void pop(){
        if (!empty()){
            cout<<arr[front++]<<"\n";
        }
        else cout<<-1<<"\n";
    }
    bool empty(){
        if (front-rear == 1) return true;
        else return false;
    }
    int size(){
        return rear-front+1;
    }
    int Front(){
        if (!empty()) return arr[front];
        else return -1;
    }
    int back(){
        if (!empty()) return arr[rear];
        else return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Queue q;
    int N;
    cin>>N;
    string S;
    cin.ignore();
    for (int i=0; i<N; i++){
        getline(cin, S);
        if (S == "front"){
            cout<<q.Front()<<"\n";
        }
        else if (S == "back"){
            cout<<q.back()<<"\n";
        }
        else if (S == "size"){
            cout<<q.size()<<"\n";
        }
        else if (S == "empty"){
            cout<<q.empty()<<"\n";
        }
        else if (S == "pop"){
            q.pop();
        }
        else{
            int data = stoi(S.substr(5));
            q.push(data);
            // string temp;
            // for (int i=5; i<S.size(); i++){
            //     temp+=S[i];
            // }
            // int data = stoi(temp);
            // q.push(data);
        }
    }

    return 0;
}