#include <iostream>

using namespace std;

int main()
{
     int n;
    cout<< "enter array size: ";
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cout<< "array element "<<i+1<< ": ";
        cin>>arr[i];
    }
    cout<<endl;

    // check even number
    int even=0, odd=0;

    cout<< "even number: ";
    for (int i=0; i<n; i++){
        if (arr[i]%2 ==0){
            cout<<arr[i]<< " ";
            even++;
        }
        if (arr[i]%2 !=0){
            cout<<arr[i]<< " ";
            odd++;
        }
    }
    cout<< endl;

    cout<<endl;
    cout<<endl;

    cout<< "even: "<<even<< " times" <<endl<< "odd: "<<odd<< " times";
    cout<<endl;


    return 0;
}
