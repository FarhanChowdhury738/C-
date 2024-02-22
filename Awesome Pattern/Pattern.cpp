#include <iostream>

using namespace std;

int main(){

   /* int row, col;
    cin>>row>>col;

    for (int i=1; i<=row; i++){
       // for one row col---
        for (int c=1; c<=col; c++){
            cout<< "*";
        } // end one row col---
        cout<<endl;
    } */


    // Hollow Rectangle
  /*  int row, col;
    cout<< "row: ";
    cin>>row;
    cout<< "col: ";
    cin>>col;


    for (int i=1; i<=row; i++){
            for (int j=1; j<=row; j++){
                if (i==1 || i==row || j==col){
                    cout<< "*";
                } else {
                    cout<< " ";
                }
            }
            cout<< endl;
    } */

    //half pyramid
/*    int n;
    cin>>n;

    for (int i=n; i>=1; i){
        for (int j=1; j<=i; j++){
            cout<< "*";
        }
        cout<<endl;
    }
*/

    //half pyramid using number---


  int size;
  cin >> size;
  for (int i = 0; i < size; i++) { // for creating the stars and space in each row
    // print spaces
    for (int j = 0; j < size - i ; j++) {
      cout << " ";
    }
    // print stars
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}











