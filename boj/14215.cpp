#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sum, max;

    if (a>=b){
        if (b>c){
            max = a; 
            sum=b+c;
        }
        else{
            if (a>c){
                max = a; 
                sum=b+c;
            }
            else{
                max = c; sum=a+b;
            }
        }
    }

    if (a<=b){
        if (a>c){
            max = b; 
            sum=a+c;
        }
        else{
            if (b>c){
                max=b; 
                sum=a+c;
            }
            else{
                max=c; 
                sum=a+b;
            }
        }
    }

    if (sum>max) cout<<sum+max;
    else{
        max = sum-1;
        cout<<sum+max;
    }
    return 0;
}
    // if (c>b){
    //     if (b>a) max=c; sum=a+b;
    //     else{
    //         if (c>a) max=c; sum=a+b;
    //         else max=a; sum=b+c;
    //     }
    // }
