#include<iostream>
using namespace std;

int main() {

    int n;
    cout<< "array size: ";
    cin>>n;

    int num[n];
    for (int i=0; i<n; i++){
        cout<< "array"<<i+1<< ": ";
        cin>>num[i];
    }
    cout<< "array elements= { ";
    for (int i=0; i<n; i++){
        cout<< num[i]<< " ";
    }
    cout<< "}";

    cout<<endl;
    //array elements neoya sesh

  /*  int counter;
    cout<<"all prime array element= {";
    for(int i=0;i<n;i++)
     {
           counter=10;

           for(int j=2;j<num[i];j++)
           {
                 if(num[i]%j==0)
                 {
                       counter=2;
                       break;
                 }
           }

           if(counter==10)
           {
                 cout<<num[i]<< " ";
           }
     }
     cout<<"}";
*/

    int counter;
    cout<< "prime array element={";
    for (int i=0; i<n; i++){
        counter=0;
            for (int j=2; j<num[i]; i++){
                if (num[i]%j==0){
                    counter=1;
                    break;
                }

            }
    }
    for (int i=0; i<n; i++){
        if (counter==0){
                    cout<<num[i]<< " ";
                }
    }
cout<< "}";










    return 0;
}
