#include <iostream>
using namespace std;

// function for question number 2
void printArray (int theArray1[2][3])
{
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<< theArray1[i][j]<< " ";
        }
        cout<<endl;
    }
}
// function for question number 3
void sumArray (int theArray2[2][3])
{
    int sum=0;
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            sum+=theArray2[i][j];
        }
        //cout<<endl;
    }
    cout<<sum;
}
// function for question number 4
void maxArray (int theArray3[2][3])
{
    int large = 0;
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (large<theArray3[i][j])
            {
                large = theArray3[i][j];
            }
        }
        //cout<<endl;
    }
    cout<<large;
}
// function for question number 5
void row_maxArray (int theArray3[2][3])
{
   int large1 = 0;
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
           if (large1<theArray3[0][j])
           {
               large1=theArray3[0][j];
           }
        }
        //cout<<endl;
    }

    int large2=0;
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
           if (large2<theArray3[1][j])
           {
               large2=theArray3[1][j];
           }
        }
        //cout<<endl;
    }
    cout<< "first row max: "<<large1<<endl;
    cout<< "second row max: " <<large2<<endl;
    int rowsum= large1+large2;
    cout<< "row max sum: "<<rowsum<<endl;
}

//function for question number 6
void colSum(int theArray4[2][3])
{
    float sum=0;

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<theArray4[i][j]<< " ";
        }
        cout<<endl;
    }

   for ( int j=0; j<3; j++)
    {
        for (int i=0; i<2; i++)
        {
            sum+= theArray4[i][j];
        }
        cout<< "sum "<<(float)sum/2<<endl;
        sum=0;
    }
}

//function for question number 7
void diagonalSum(int theArray5[3][3])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<theArray5[i][j]<< " ";
        }
        cout<<endl;
    }

    int sum=0,sum2=0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (i==j)
            {
                sum+= theArray5[i][j];
            }
            if (i+j == 3-1)
            {
                sum2+=theArray5[i][j];
            }
        }
    }

    cout<<sum<<endl;
    cout<<sum2<<endl;
}





int main ()
{ system("color 0a");


    //8. Implement a C++ program to find the product of two matrices using functions.
    int arr[3][3]= { {2,3,4}, {4,6,1}, {1,7,9} }, arr2[3][3]= { {1,3,4}, {4,6,8},{1,3,4} };
    int mul[3][3];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            mul[i][j]=0;
            for (int k=0; k<3; k++)
            {
                mul[i][j]+= arr[i][k]*arr2[k][j];
            }
        }
        }

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
           cout<<mul[i][j]<< " ";
        }
        cout<<endl;

    }


    //7. Implement a function to find the diagonal sum of a square matrix
/*    int arr[3][3]= { {2,3,4}, {4,6,1}, {1,7,9} };
    diagonalSum(arr);
*/

    //6. Write a function to compute the average of each column in a 2D array.
/*    int arr[2][3] = {{1,3,7},{5,3,2}};
    colSum(arr);
*/

    //5. Create a program that uses functions to find the row with the maximum sum in a 2D array.
/*    int arr[2][3] = {{1,3,7},{5,3,2}};
    row_maxArray(arr);
*/

    //4. Write a C++ function to find the maximum element in a 2D array.
/*    int arr[2][3] = {{1,3,7},{5,3,2}};
    maxArray(arr);
*/

    //3. Create a program that uses a function to find the sum of all elements in a 2D array.
/*    int arr[2][3] = {{1,3,7},{5,3,2}};
    sumArray(arr);
*/

    //2. Implement a function to display the elements of a 2D array.
   /* int arr[2][3] = {{1,3,7},{5,3,2}};
    printArray(arr);
*/

    //1. Write a C++ function to initialize a 2D array.
/*
    int n1,n2;
    cout<< "type row and colum: ";
    cin>>n1>>n2;
    int arr[n1][n2];

    for (int i=0; i<=n1; i++)
    {
        for (int j=0; j<=n2; j++)
        {
            cout<< "num ["<<i<< "]["<<j<< "] = ";
            cin>>arr[i][j];
        }
    }
     for (int i=0; i<n1; i++)
    {
        for (int j=0; j<n2; j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
*/


    return 0;
}
