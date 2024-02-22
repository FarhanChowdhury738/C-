#include <iostream>
using namespace std;

void idt (int r, int c, double arr[][10])
{
    double s = arr[0][0];
     for (int i=0; i<2; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (s>arr[0][j])
            {
                s= arr[0][j];
            }
        }
    }
    double l = arr[1][1];
     for (int i=0; i<2; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (l<arr[1][j])
            {
                l= arr[1][j];
            }
        }
    }

    cout<< "first row smallest :  "<<s<<endl;
    cout<< "second row largest: "<<l<<endl;

     double product = s*l;
     cout<<"product: " <<product<<endl;

}

int main ()
{ system("color 0a");


       int n1=2, n2=4;
    double arr[n1][10];

    //cout<< "array: ";

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout<< "examine information "<<j+1<< ": ";
            cin>>arr[i][j];
        }
    }

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout<< arr[i][j]<< " ";
        }
        cout<<endl;
    }

    idt(2,4, arr);




    return 0;
}
