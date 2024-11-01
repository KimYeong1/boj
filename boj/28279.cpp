#include <iostream>

using namespace std;

struct deque{
    int *arr;
    int front, rear;

    deque(){
        arr = new int[2000000]; // 1~1,000,000까지 push만 들어올 수 있으니 최대 범위로 지정
        front = 1000000;
        rear = 999999;
    }
    ~deque(){
        delete[] arr;
    }

    void push_front(int data){
        arr[--front] = data;
    }

    void push_back(int data){
        arr[++rear] = data;
    }
    void pop_front(){
        if (!empty()){
            cout<<arr[front++]<<"\n";
        }
        else cout<<-1<<"\n";
    }
    void pop_back(){
        if (!empty()){
            cout<<arr[rear--]<<"\n";
        }
        else cout<<-1<<"\n";
    }
    void size(){
        cout<<(rear-front)+1<<"\n";
    }
    bool empty(){
        if (front>rear){
            return true;
        }
        else return false;
    }
    void print_front(){
        if (!empty()){
            cout<<arr[front]<<"\n";
        } else cout<<-1<<"\n";
    }
    void print_back(){
        if (!empty()){
            cout<<arr[rear]<<"\n";
        } else cout<<-1<<"\n";
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque d;
    
    int N;
    cin>>N;
    int command;
    int data;
    for (int i=0; i<N; i++){
        cin>>command;
        if (command == 1){
            cin>>data;
            d.push_front(data);
        }
        else if (command == 2){
            cin>>data;
            d.push_back(data);
        }
        else if (command == 3){
            d.pop_front();
        }
        else if (command == 4){
            d.pop_back();
        }
        else if (command == 5){
            d.size();
        }
        else if (command == 6){
            cout<<d.empty()<<"\n";
        }
        else if (command == 7){
            d.print_front();
        }
        else d.print_back();
    }

    return 0;
}