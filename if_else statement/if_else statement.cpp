#include <iostream>
using namespace std;

int main(){
    //if i have a two girlfriend, ekjon high budget, arekjon low budget..

    int ache;
    cout<<"I have: ";
    cin>>ache;

    if (ache>5000){
            if(ache>8500){
                cout<<"i will go with high budget girlfriend for shopping"<<endl;
            } else {
                cout<<"i will go with high budget girlfriend for movie\n";
            }
    } else if(ache>2000){
        cout<<"i will go with low budget girlfriend\n";
    } else if (ache>1000) {
        cout<<"i will go my friend\n";
    } else if (ache>500) {
        cout<<"otherwise i will go my distict\n";
    } else{
        cout<<"i  will go alone\n";
    }


    int number;
    cout<<"type any number then i will find even or odd number: ";
    cin>>number;
    if (number%2){
        cout<<"Even number"<<endl;
    } else {
        cout<<"odd number"<<endl;
    }
    return 0;
}
