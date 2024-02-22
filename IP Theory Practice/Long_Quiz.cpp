#include<iostream>
using namespace std;

int main(){
system("color 0a");


    int arr[]={1,2,4,3,5};

    int temp[5+1];

    for(int i=0 ; i< 6; i++){
        temp[i]=0; // 0 0 0 0 0 0
    }
    for(int i=0 ; i< 5 ; i++){
        temp[arr[i]-1]=1;//  1=1, 2=1, 3=1, 4=1, 5=1 [1,1,1,1,1]
    }
    int ans;
    for(int i=0 ; i<= 5 ; i++){
        if(temp[i]==0){ // index 5 = 0 [1,1,1,1,1,0]

            ans= i +1; // 5+1
        }
    }
    cout<<ans;


    return 0;
}


