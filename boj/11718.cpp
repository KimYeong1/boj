// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main(){
//     vector<string> S;
//     for (int i=0; i<S.size(); i++){
//         cin>>S[i];
//         cout<<S[i];
//     }
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)){
        cout<<line<<"\n";

    }

    return 0;
}
