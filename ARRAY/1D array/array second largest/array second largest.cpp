
#include <iostream>
using namespace std;
int main (){


    int n;
    cout<<"arr size: ";
    cin>>n;

    int arr[n];
        //for input
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

        //find max & min value
    int maxNO=arr[0], minNO=arr[0];
    for(int i=0; i<n; i++){

        maxNO=max(maxNO,arr[i]);
        minNO=min(minNO, arr[i]);
    }
    int slarge=arr[0];
    for(int i=0; i<n; i++){
        if (slarge<arr[i]){
            if (arr [i] != maxNO){
                slarge = arr [i];
            }
        }

    }
    int second_small=arr[0];
    for (int i=0; i<n; i++){
        if (second_small>arr[i]){
            if (arr[i]!=minNO){
                second_small=arr[i];
            }
        }
    }

    cout<< "max: "<<maxNO<<endl;
    cout<< "min: "<<minNO<<endl;
    cout<< "second larage: "<<slarge<<endl;
    cout<< "second small: "<<second_small<<endl;

cout<<endl;
    return 0;
}
