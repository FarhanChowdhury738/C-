#include <iostream>
using namespace std;

void  d1()
{
    cout<<endl;
    cout<< "--------------------first day tour----------------------"<<endl;
    cout<<endl;

    cout<< "Station to  rastha matha    : 33.33tk "<<endl;
    cout<< "rastha matha to Kaptai CNG  : 100tk"<<endl;
    cout<< "Restaurant entry is free    : 50"<<endl;
    cout<< "CNG reserve navy camp       : 40"<<endl;
    cout<< "Again CNG reserve bogi lake : 100tk"<<endl;
    cout<< "Camping bogi Lake + Dinner  : 1100tk"<<endl;

}

void  d2()
{
    cout<< "--------------------Second day tour----------------------"<<endl;
    cout<<endl;

    cout<< "Kaptai to Rangamati CNG         : 66.66tk"<<endl;
    cout<< "Room rent                       : 500tk "<<endl;
    cout<< "CNG Rajbari                     : 25tk"<<endl;
    cout<< "Resort fee with swimming pool   : 50tk"<<endl;
    cout<< "Back to Home                    : 150tk"<<endl;

}


int main()
{ system ("color 0a");


    int num;
    while (7)
    {
        cout<<endl;
        cout<< "------MEMBER LIST---------\n";
    cout<< "1. Al Razi\n";
    cout<< "2. Mushfik Alam\n";
    cout<< "3. Nusrat Zaman Sujana\n";
    cout<< "4. Maherin Zaman shuchona\n";
    cout<< "5. Shojjoti Hossen\n";
    cout<< "6. Farhan Chowdhury\n";
    cout<< "7. EXIT\n";

    cout<< "enter a number: ";
    cin>> num;

    switch (num)
    {
    case 1:
        {
            d1();
            cout<<endl;
            cout<< "            DAY 01: 1423.33tk per person"<<endl;
            d2();
            cout<<endl;
            cout<< "            DAY 02: 791.66tk per person"<<endl;
            cout<<endl;
            cout<< "***************************************"<<endl;
            cout<< "        2214.99tk in total 2 DAY"<<endl;

            break;
        }
    case 2:
        {
            d1();
            cout<<endl;
            cout<< "            DAY 01: 1423.33tk per person"<<endl;
            d2();
            cout<<endl;
            cout<< "            DAY 02: 791.66tk per person"<<endl;
            cout<<endl;
            cout<< "***************************************"<<endl;
            cout<< "        2214.99tk in total 2 DAY"<<endl;

            break;
        }
    case 3:
        {
            d1();
            cout<<endl;
            cout<< "            DAY 01: 1423.33tk per person"<<endl;
            d2();
            cout<<endl;
            cout<< "            DAY 02: 791.66tk per person"<<endl;
            cout<<endl;
            cout<< "***************************************"<<endl;
            cout<< "        2214.99tk in total 2 DAY"<<endl;

            break;
        }
    case 4:
        {
            d1();
            cout<<endl;
            cout<< "            DAY 01: 1423.33tk per person"<<endl;
            d2();
            cout<<endl;
            cout<< "            DAY 02: 791.66tk per person"<<endl;
            cout<<endl;
            cout<< "***************************************"<<endl;
            cout<< "        2214.99tk in total 2 DAY"<<endl;


            break;
        }
    case 5:
        {
            cout<< "Shojjoti Hossen COST: \n";
            d1();
            cout<<endl;
            cout<< "            DAY 01: 1423.33tk per person"<<endl;
            d2();
            cout<<endl;
            cout<< "            DAY 02: 791.66tk per person"<<endl;
            cout<<endl;
            cout<< "***************************************"<<endl;
            cout<< "        2214.99tk in total 2 DAY"<<endl;


            break;
        }
    case 6:
        {
            d1();
            cout<<endl;
            cout<< "            DAY 01: 1423.33tk per person"<<endl;
            d2();
            cout<<endl;
            cout<< "            DAY 02: 791.66tk per person"<<endl;
            cout<<endl;
            cout<< "***************************************"<<endl;
            cout<< "        2214.99tk in total 2 DAY"<<endl;

            break;
        }
    case 7:
        {
            exit(7);
            break;
        }



    }// switch


    }// while





    return 0;
}
