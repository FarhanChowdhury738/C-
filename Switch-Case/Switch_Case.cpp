#include <iostream>
using namespace std;

int main(){

    char button;
    cout<< "enter a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<< "hello!"<<endl;
        break;
    case 'b':
        cout<< "bye!"<<endl;
        break;
    case 'c':
        cout<< "cholo!"<<endl;
        break;
    default:
        cout<< "i'm still learing...";
    }







    return 0;
}
