#include <iostream>

using namespace std;

int main(){
 system("color 0b");

    cout<<"  ***************** 2D ARRAY ***************"<<endl;
    cout<<endl;


/*   Develop a program that has a 2D array that can hold floating point numbers. The 2D array has 2 rows and
   four columns. The program finds the largest element from the first row, the smallest element from the
   second row, multiplies them and displays the largest element, smallest element as well as the multiplied
   result.
*/


    //          -------------START-------------
    int r,c,i,j,k;
    int a[2][3]= { {2,4,6}, {1,3,5} };
    int b[2][3]= { {9,7,5}, {3,1,4} };


 /*   cout<<"enter the number of row=";
    cin>>r;
    cout<<"enter the number of column=";
    cin>>c;
    cout<<"enter the first matrix element=\n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        cin>>a[i][j];
        }
    }

    cout<<"enter the second matrix element=\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        cin>>b[i][j];
        }
    }
*/
        r=2;
        c=3;
    cout<<"the first matrix element\n";

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<"the second matrix\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        cout<<b[i][j]<< " " ;
        }
        cout<<endl;
    }


    int mul [2][3];
    cout<<"multiply of the matrix\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        mul[i][j]=0;
            for(k=0;k<c;k++)
            {
            mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    //for printing result
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        cout<<mul[i][j]<<" ";
        }
        cout<<"\n";
    }
    //          ----------END------------

/*              -------------START-------------
 int n, m;
    cout<<"Enter row number : ";
    cin>>n;
    cout<<"Enter column number : ";
    cin>>m;
int arr[n][m];


    cout<<"Your array size is : "<<m<<"*"<<n<<endl;

    cout<<"Enter array element : ";
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Your MATRIX :"<<endl;
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
*/ //               ---------------------END--------------


 /*
    //find large element row and column         --------START-----------


   int i, j, k, s;


    int num [3][4];


    cout<< "Enter a element (3 X 4) = ";
    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            cin>>num[i][j];
        }
    }
    cout<<endl;

    int num1 [3][4];
    cout<< "Enter a element (3 X 4) = ";
    for (k=0; k<3; k++){
        for (s=0; s<4; s++){
            cin>>num1[k][s];
        }
    }


    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            cout<<num[i][j]<< " ";
        }
        cout<<endl;
    }
    int large= num[0][0];
    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            if (num[i][j]>large){
                large = num[i][j];
            }
        }
    }
    cout<< "Large: "<<large;
  */
    //       ---------End--------



    /* int A[2][4]= { {13, 31, 223, 423},
                       {13, 31, 13, 11}
                    };
      int  Mins= A[0][0] , Maxs= A[0][0] ;

   /* for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<A[i][j]<<" ";


        }
        cout<<endl;
    }

    for(int i=0;i<2;++i)
        for(int j=0;j<4;++j)
        {
            if(A[i][j]>Maxs)
                Maxs=A[i][j];
        }

        for (int i=0; i<2; i++){
            for (int j=0; j<4; j++){
                if (A[i][j]<Mins){
                    Mins= A[i][j];
                }
            }
        }
    cout<<endl;

    //float mul= Max*Min;

    cout<<"Max: "<<Maxs<<endl;
    cout<<"Min: "<<Mins<<endl;
    //cout<< "Multiplication: "<<mul<<endl;


*/ //           -----------END-----------


/*
    int A[3][4]= { {1,2,3,1}, {4,5,6,1}, {7,8,9,1} };

        for(int row=0; row<3; row++)
            {
            for(int col=0; col<3; col++){
                cout<<A[row][col]<< " ";

            }
            cout<<endl;

        }
        //         ------------End---------------
*/


/*    //                ---------------Start----------------
    int n1,n2;
    cout<< "type 2 num: ";
    cin>>n1>>n2;

    int input[n1][n2];

    for (int r=0; r<n1; r++){
        for (int c=0; c<n2; c++){
            cout<< "input num ["<<r<< "]["<<c<< "] = ";
            cin>>input [r][c];
        }
    }

    for(int r=0; r<n1; r++)
            {
            for(int c=0; c<n2; c++){
                cout<<input[r][c]<< " ";

            }
            cout<<endl;

        }
        //---------------End---------------
*/


/* ----------------comment Start---------------

    cout<< A[0][0]<< " ";
    cout<< A[0][1]<< " ";
    cout<< A[0][2]<< " ";
    cout<< A[0][3]<< " ";
    cout<<endl;
    cout<< A[1][0]<< " ";
    cout<< A[1][1]<< " ";
    cout<< A[1][2]<< " ";
    cout<< A[1][3]<< " ";
    cout<<endl;
    cout<< A[2][0]<< " ";
    cout<< A[2][1]<< " ";
    cout<< A[2][2]<< " ";
    cout<< A[2][3]<< " ";

        ----------------comment End--------------
*/








    return 0;
}
