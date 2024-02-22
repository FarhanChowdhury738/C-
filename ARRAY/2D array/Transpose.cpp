#include <iostream>
using namespace std;

void transpose (int r, int c, int arr[][10])
{
    cout<< "----------Transpose---------\n";
    int temp [r][c];
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            temp [j][i]= arr[i][j];
        }
    }
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout<<temp[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main ()
{
    int n1,n2;
    cout<< "type row & column: ";
    cin>>n1>>n2;

    int arr[n1][10];

    for (int i=0; i<n1; i++)
    {
        for (int j=0; j<n2; j++)
        {
            cout<<"Enter element of ("<<i+1<<" , "<<j+1<<") : ";
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<n1; i++)
    {
        for (int j=0; j<n2; j++)
        {

            cout<<arr[i][j]<< "  ";
        }
        cout<<endl;
    }

    cout<<endl;
    transpose(n1,n2, arr);


    return 0;
}
