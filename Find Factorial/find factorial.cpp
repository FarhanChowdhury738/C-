#include <iostream>
using namespace std;

int main()
{
    int nn, factorial=1;
            cout<<"num: ";
            cin>>nn;
            for(int i = 1; i <= nn; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << nn << " = " << factorial;

    return 0;
}
