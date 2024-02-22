#include <iostream>
using namespace std;

class machine {

private :
    int balance= 10000;
    int withdraw;
    int transfer;

public:
    void withDrawMOney( int num)
    {
        num = withdraw;
    }

};

int main ()
{ system("color 0a");

    machine bank;

    cout<< "    -------------MENU------------\n";
    cout<< "        1. withdraw money"<<endl;
    cout<< "        2. transfer money"<<endl;
    cout<< "        3. checking recent transactions"<<endl;

    cout<<endl;
    int num;
    cout<< "Choice any one: ";
    cin>>num;

    switch (num)
    {
    case 1:
        {

            break;
        }
     case 2:
        {
            break;
        }
     case 3:
        {
            break;
        }

    }

    return  0;
}
