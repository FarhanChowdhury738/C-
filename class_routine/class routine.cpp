#include <iostream>
#include <algorithm>

using namespace std;

int main (){

    string day;
    cout<< "type your day: ";
    cin>>day;
    transform(day.begin(), day.end(), day.begin(), ::tolower);

    if (day== "sunday"){
        cout<< "sunday: no class!";
    } else if (day== "monday"){
        cout<< "monday: 8 to 2";
    } else if (day== "Tuesday"){
        cout<< "tuesday: 8 to 11";
    } else if (day== "Wednesday"){
        cout<< "Wednesday: 8 to 2";
    } else if (day== "Thursday"){
        cout<< "Thursday: 8 to 11";
    } else if (day== "Friday"){
        cout<< "friday: no class!";
    } else if (day=="Saturday"){
        cout<< "Saturday: no class!";
    } else{
        cout<< "this txt is invaild...";
    }









/* char day[10];
    cout<<"type txt: ";
    cin>>day;

    for (int i=0; i<strlen(day); i++)
      putchar(tolower(day[i]));
*/

return 0;
}
