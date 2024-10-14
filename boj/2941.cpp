#include <iostream>
#include <string>

using namespace std;

int croatia(){
    int count = 0;
    string croatia[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string input;
    string output;
    cin>>input;
    for (int i=0; i<input.length(); i++){
        if (input[i] == '='){
            if (input[i-1] == 'z' && input[i-2]=='d'){
                input[i-1] = '=';
                input[i-2] = '=';
                output.push_back('a');
            }
            else{
                input[i-1] = '=';
                output.push_back('b');
                }
        }
        else if (input[i]=='-'){
            input[i]='=';
            input[i-1] = '=';
            output.push_back('c');
        }
        else if (input[i]=='j'){
            if (input[i-1] == 'l'){
                input[i] = '=';
                input[i-1] = '=';
                output.push_back('d');
            }
            else if (input[i-1]=='n'){
                input[i] = '=';
                input[i-1]='=';
                output.push_back('e');
            }
        }
    }

    for (int i=0; i<input.length(); i++){
        if (input[i]!='='){
            count++;
        }
    }
    // cout<<"input : "<<input<<"\n";
    // cout<<"count : "<<count<<"\n";
    // cout<<"output.length() : "<<output.length()<<"\n";
    count = count + output.length();
    return count;
}


int main(){
    cout<<croatia();
    return 0;
}