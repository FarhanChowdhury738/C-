#include <iostream>
using namespace std;
int main ()
{

        // Student application

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
        if (max>student[i]){

            max=student[i];
        }
    }

    int min= student[0];
    for (int i=1; i<student_array; i++){
        if (min<student[i]){

            min=student[i];
        }
    }

    cout<< "max: "<<max<<endl;
    cout<< "min: "<<min<<endl;

        // total mark & avarage
    cout<< "Total mark: "<<sum<<endl;

    float avg= (float)sum/student_array;
    cout<< "avarage: "<<avg<<endl;
    return 0;
}
