#include <iostream>
using namespace std;

int main()
{
    int a= 20;
    int b= 10;

    int* ptra= &a;
    int* ptrb= &b;

    int sum= *ptra+*ptrb;
    cout<<sum<<endl;



    return 0;

}
