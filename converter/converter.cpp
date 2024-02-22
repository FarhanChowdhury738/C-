#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    //celsius to fahrenheit...
    cout << "\n++++++++++++++++++++++++++++++++++++\n"
    << "           celsius to fahrenheit"
    << "\n++++++++++++++++++++++++++++++++++++\n";

    double cel;
    cout<<"celcius: ";
    cin>>cel;

    double fahrenheit= 1.8*cel+32;
    cout<<"this is fahrenheit: "<<fahrenheit<<endl;



    //cm to m/s converter...
    cout << "\n++++++++++++++++++++++++++++++++++++\n"
    << "           cm to m/s "
    << "\n++++++++++++++++++++++++++++++++++++\n";

    int cm;
    cout<<"type your cm num: ";
    cin>>cm;
    float ms = (float) cm/100;
    cout<<"this is your m/s: "<<ms<<endl;



    // percentage converter...
    cout << "\n++++++++++++++++++++++++++++++++++++\n"
    << "           percentage converter"
    << "\n++++++++++++++++++++++++++++++++++++\n";

    int percentage;
    cout<<"type your a number: ";
    cin>>percentage;

    int percent;
    cout<<"How many percent previous number: ";
    cin>>percent;

    float per= percentage*percent/100;
    cout<<"this is your percentage number: "<<per<<endl;


    // BMI converter...
    cout << "\n++++++++++++++++++++++++++++++++++++\n"
    << "            Body Mass Index"
    << "\n++++++++++++++++++++++++++++++++++++\n";

    float height_foot, weight;
    cout << "Please enter your height in foot: ";
    cin >> height_foot;
    float height= height_foot/3.28;


    cout << "please enter your weight in kg: ";
    cin >> weight;

    float BMI= weight/ pow(height,2);
    cout << "Your BMI is " << BMI << "\n";

    if (BMI < 18.5) {
        cout << "you are underweight,"<< "take care of your body" ;
    } else if (BMI>18.5 & BMI < 24.9) {
        cout << "Congrats! You are healthy";
    } else if(BMI>25 & BMI < 29.9) {
        cout << "You are overweight, take care of your body";
    }else if(BMI>30) {
        cout << "You are Obese";
    }


    return 0;
}

