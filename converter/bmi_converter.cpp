#include<iostream>
#include <math.h>
using namespace std;


int main() {

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
