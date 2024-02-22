#include <iostream>
using namespace std;
int main (){


     int n;
     cout<< "How many array: ";
     cin>>n;
     int mark[n];
        // for input
     for( int i=0; i<n; i++){
        cout<< "mark "<<i+1<< ": ";
        cin>>mark[i];
     }
        //for output
     for (int i=0; i<n; i++){
        cout<<mark[i]<< " " ;

     }

    return 0;
}
