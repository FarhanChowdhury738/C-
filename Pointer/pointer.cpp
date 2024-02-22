#include <iostream>
using namespace  std;

int main ()
{
    system("color 02");


   //---START----
 /*   int number = 10;

    int* pointer = &number;

    cout<<number<<endl; //variable value
    cout<<pointer<<endl; //address
    cout<<&number<<endl; //address
    cout<<*pointer<<endl; // variable value

    int n=33;

    int* pointer2;
    pointer2 = &n;

    cout<<pointer2<<endl;
*/
    //---END-----

    //---variable access and  modified------START------

    /*cout<< "variable access and  modified"<<endl;
    int a=20;
    int* ptr_a = &a;
    cout<<*ptr_a<<endl;
    *ptr_a= 10;
    cout<<a<<endl;
 */
    //---variable access and  modified------END-------


    //---Pointer Arithmetic----START------
    /*
    cout<< "Pointer Arithmetic\n";
    int n= 10;
    int* ptr= &n;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;

    char ch= 'f';
    char* ptr_ch= &ch;
    cout<<ptr_ch<<endl;
    ptr_ch++;
    cout<<ptr_ch<<endl;
    */

    //change a value which is pointed by pointer
      string food;
      cin>>food;
      string* ptr = &food;

      // Output the value of food
      cout << "user input name: " << food << "\n";

      // Output the memory address of food
      cout << "user input name address: " << &food << "\n";

      // Access the memory address of food and output its value
      //cout << *ptr << "\n";

      // Change the value of the pointer
      *ptr = "Hamburger";

      // Output the new value of the pointer
      cout << "change the value: " << *ptr << "\n";

      // Output the new value of the food variable
      cout << "now variable latest value: " << food << "\n";


    //---Pointer Arithmetic----END------




    return 0;

}
