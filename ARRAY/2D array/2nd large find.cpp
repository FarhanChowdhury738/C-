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

    cout<< "----------Transpose---------\n";
    int temp [3][3];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            temp [j][i]= arr[i][j];
        }
    }
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<temp[i][j]<< " ";
        }
        cout<<endl;
    }

cout<< "-----------first Max & Second Max------------\n";
    int large = arr[0][0];

    for (int i=0; i<3; i++)
    {

        for (int j=0; j<3; j++)
        {

            if (large<arr[i][j])
            {
                large= arr[i][j];
            }
        }
    }

    int slarge = arr[0][0];

    for (int i=0; i<3; i++)
    {

        for (int j=0; j<3; j++)
        {

            if (slarge<arr[i][j])
            {
                if (arr[i][j]!=large)
                {
                    slarge = arr[i][j];
                }

            }
        }
    }
    cout<<large<<endl;
    cout<<slarge<<endl;




    return 0;
}
