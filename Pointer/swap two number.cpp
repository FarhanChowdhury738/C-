#include <iostream>

using namespace std;

void swaps (int *a, int* b)
{
    int temp= *a;
    *a = *b;
    *b= temp;
}

int main()
{
     int a= 20, b= 30, c= 40, d=50;

     // SUM
     int* ptra = &a;
     int* ptrb= &b;
    int sum= *ptra+*ptrb;
     cout<<a<< "+"<<b<< "= "<<sum<<endl;

     // Swap value
      int*x = &a;
      int*y = &b;
      int t= *x;
      *x=*y;
      *y=t;
      cout<<a << " "<<b<<endl;

     int number = 10;
    int* pointer = &number;

    cout<<number<<endl; //variable value
    cout<<pointer<<endl; //address
    cout<<&number<<endl; //address
    cout<<*pointer<<endl; // variable value



    return 0;
}
