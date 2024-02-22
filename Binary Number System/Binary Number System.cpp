#include <iostream>
#include <cmath>
using namespace std;

 int main (){


    int n;
    cout<< "type any num: ";
    cin>>n;
    bool b=0;

    for (int i=2; i<=n; i++){
        if(n%i==0){
            cout<< "it's non prime"<<endl;
            break;
        } else {
            cout<< "prime";
            break;
        }
    }











    return 0;
 }
