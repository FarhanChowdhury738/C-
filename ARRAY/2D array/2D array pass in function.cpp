#include <iostream>
using namespace std;

void print (int r, int c, int arr[][10])
{
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main ()
{
    int n1=3, n2=3;
    int arr[n1][10]= { {1,2,3},{4,5,6},{7,8,9} };

    print(n1,n2, arr);

    return 0;
}
