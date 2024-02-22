#include <iostream>
using namespace std;

int main(){

    int n;
    cout<< "NUM: ";
    cin>>n;

    if (n%2 ==0){
        if (n>0){
            cout<< "Positive even number";
        } else if(n<0){
            cout<< "Negative even number";
        }
    } else if (n%2 !=0){
        if (n>0){
            cout<< "Positive odd number";
        } else if (n<0){
            cout<< "Negative odd number";
        }
    }



    return 0;
}

