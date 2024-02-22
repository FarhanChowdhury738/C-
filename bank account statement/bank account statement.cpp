#include <iostream>
using namespace std;

int main(){

    int southest_bank;
    cout<<"Southest Bank: ";
    cin>>southest_bank;

    int Brac_bank;
    cout<<"Brac Bank: ";
    cin>>Brac_bank;

    int Jamuna_bank;
    cout<<"Jamuna Bank: ";
    cin>>Jamuna_bank;

    int sum=southest_bank+Brac_bank+Jamuna_bank;
    cout<<"Now Total Amount: "<<sum<<endl;

    int medicine;
    cout<<"medicine: ";
    cin>>medicine;

    int dibo;
    cout<<"dada-dadu ke dite hobe: ";
    cin>>dibo;

    int medi_di= medicine+dibo;
    int total= sum-medi_di;
    cout<<"Now Total amount: "<<total;


    return 0;
}
