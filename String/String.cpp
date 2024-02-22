#include <iostream>
#include <string>
using namespace std;

int main (){


    //show 01 letter...
    string show = "FaRhan";
    cout << show[2]<<endl;

    //change 01 letter
    string change = "Faahan";
    change[2] = 'r';
    cout << change<<endl;

    //full name output
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName<<endl;

    // any letter convert upper
    char ch;
    cout<< "enter any small letter: ";
    cin>>ch;
    ch= toupper(ch);
    cout<< ch<<endl;


 /*   char arr[] = "Engineering Discipline.";

    cout << "Original String:\n"<< arr<< endl;
    cout<<"String in UPPERCASE:\n";
    for (int x=0; x<strlen(arr); x++)
        putchar(toupper(arr[x]));
*/






return 0;
}

