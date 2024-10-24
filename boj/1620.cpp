#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin>>N>>M;

    string pocketmon;
    map<string, int> dogam;
    // map<int, string> index_to_name;
    string arr[N];
    for (int i=0; i<N; i++){
        cin>>pocketmon;
        dogam[pocketmon] = i+1;   // dogam이라는 map type에 pocketmon이라는 string을 key로, i라는 index를 value로 넣음.
        // index_to_name[i+1] = pocketmon;
        arr[i] = pocketmon;
    }

    for (int i=0; i<M; i++){
        cin>>pocketmon;
        if (pocketmon[0]-'0'<10){
            int index = stoi(pocketmon);
            // cout<<index_to_name[index]<<"\n";
            cout<<arr[index-1]<<"\n";

            
        }
        else{
            cout<<dogam[pocketmon]<<"\n";
        }
    }
    return 0;
}