#include <iostream>

using namespace std;

int main (){


    // data_type array_name [array_size]

/*    int arr[]= {12, 13, 14};
    for (int i=0; i<=2; i++){
        cout<<arr[i]<<endl;
    }
*/

/*     int n;
     cout<< "How many array: ";
     cin>>n;
     int mark[n];
        // for input
     for( int i=0; i<n; i++){
        cout<< "mark "<<i+1<< ": ";
        cin>>mark[i];
     }
        //for output
     for (int i=0; i<n; i++){
        cout<<mark[i]<< " " ;

     }
*/



        // Student application
 /*
    int student_array;
    cout<< "enter number of student: ";
    cin>>student_array;

    int student[student_array];
    int sum=0;
    for (int i=0; i<student_array; i++){
        cout<< "student_"<<i+1<< ": ";
        cin>>student[i];
        sum= sum+student[i];
    }


        // find max & min

    int max=student[0];
    for (int i=1; i>student_array; i++){
        if (max<student[i]){

            max=student[i];
        }
    }

    int min= student[0];
    for (int i=1; i<student_array; i++){
        if (min>student[i]){

            min=student[i];
        }
    }

    cout<< "max: "<<max<<endl;
    cout<< "min: "<<min<<endl;

        // total mark & avarage
    cout<< "Total mark: "<<sum<<endl;

    float avg= (float)sum/student_array;
    cout<< "avarage: "<<avg<<endl;
*/


/*        // girlfriend number and her age----Start---
        int n;
        cin>>n;

        int girl_friend[n];
            //input
        for (int i=0; i<n; i++){
            cout<<i+1<< ": ";
            cin>>girl_friend[i];
        }
            //output
        for (int i=0; i<n; i++){
            cout<< "Girlfriend_"<<i+1<< ": "<<girl_friend[i]<<endl;
        }

    int max=girl_friend[0];
    for (int i=1; i<n; i++){
        if (max<girl_friend[i]){

            max=girl_friend[i];
        }
    }

    int min= girl_friend[0];
    for (int i=1; i<n; i++){
        if (min>girl_friend[i]){

            min=girl_friend[i];
        }
    }

    cout<< "Senior Girlfriend: "<<max<<endl;
    cout<< "Junior Girlfriend: "<<min<<endl;
    //
*/

        //find max & min value---Start---
    int n;
    cout<<"arr size: ";
    cin>>n;

    int arr[n];
        //for input
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

        //find max & min value
    int maxNO=arr[0], minNO=arr[0];
    for(int i=0; i<n; i++){

        maxNO=max(maxNO,arr[i]);
        minNO=min(minNO, arr[i]);
    }
    int slarge=arr[0];
    for(int i=0; i<n; i++){
        if (slarge<arr[i]){
            if (arr [i] != maxNO){
                slarge = arr [i];
            }
        }

    }
    int ssmall=arr[0];
    for(int i=0; i<n; i++){
        if (ssmall>arr[i]){
            if ( minNO != arr [i]);
            ssmall= arr[i];
        }

    }



        cout<< "max: "<<maxNO<< " \n"<< "min: "<< " \n"<<minNO<< " "<< "slearge: "<<slarge<< " \n";
        //find max & min value---End---



/*    // single array called---Start---
    int num[]={234, 24, 25, 28, 22};
    cout<<num[3];
*/    // single array called---End---

















    return 0;
}
