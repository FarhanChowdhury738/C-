#include <iostream>
using namespace std;

int main ()
{

   int arr[3][3];
    cout<< "type 9 elements: ";

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<arr[i][j]<< "  ";
        }
        cout<<endl;
    }
cout<<endl;

    int sum=0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
                if (i==j)
                {
                    sum+= arr[i][j];
                }
        }
    }

    int sum2=0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
                if (i+j== (3-1))
                {
                    sum2+= arr[i][j];
                }
        }
    }
    cout<<"right side sum: "<<sum<<endl;
    cout<<"left side sum: "<<sum2<<endl;





    return 0;
}
