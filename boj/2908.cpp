#include <iostream>
#include <string>

using namespace std;

void comparison(int first, int second){
    if (first>second){
        cout<<first;
    }
    else{
        cout<<second;
    }
}

void change(char* a, char* b){
    char temp;
    temp = *a;
    *a = *b;
    *b=temp;
}

void reverse(string first, string second){
    change(&first[0], &first[2]);
    change(&second[0], &second[2]);

    comparison(stoi(first), stoi(second));
}

void input(){
    string first,second;
    cin>>first>>second;
    reverse(first, second);
}


int main(){
    input();
    return 0;
}