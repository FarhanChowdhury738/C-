#include <iostream>
using namespace std;

void p (int r, int c, int arr[][10])
{
    int * arr2[3][3];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            arr2[i][j]= &arr[i][j];
        }
    }


    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<*arr2[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<< "-------1st row max------------\n";

    int large= *arr2[0][0];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (large<*arr2[0][j])
            {
                large= *arr2[0][j];
            }
        }
    }
    cout<<large<<endl;

    cout<< "-------2nd row min--------\n";
    int m= *arr2[1][1];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (m>*arr2[1][j])
            {
                m= *arr2[1][j];
            }
        }
    }

    cout<<m<<endl;


}

int main ()
{
system("color 0a");


    int n1=3, n2=3;
    int arr[n1][10];

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    p(n1,n2, arr);



    return 0;
}
