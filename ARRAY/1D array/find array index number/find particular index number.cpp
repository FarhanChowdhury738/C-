#include <iostream>
using namespace std;
int main() {

       int n;
       cin>>n;
       int arr[n];

       for (int i=0; i<n; i++){
            cout<< "array element "<<i+1<< ": ";
            cin>>arr[i];
       }

       int index, item;
       cout<< "which number do you search: ";
       cin>>item;


       for(int i=0; i<n; i++){
            if (item==arr[i]){
                index=i;
            }

       }
       cout<< "index number: "<<index;

   return 0;
   }


