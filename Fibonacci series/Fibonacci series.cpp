#include <iostream>
using namespace std;
int main() {

    int n1=0, n2=1, i, n3, n;
    cout<< "enter the num, Fibonacci series: ";
    cin>>n;

    for(i=0; i<n; i++){
        if (i<=1){
            n3=i;
        }
        else {
            n3= n1+n2;
            n1= n2;
            n2= n3;
        }
        cout<<n3<< " ";
    }

   return 0;
   }
