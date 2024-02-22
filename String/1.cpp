#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main ()
{

    // Length
    char s4[]= "Hello_Farhan ";
    char s5[10];

    int len = strlen (s4);
    cout<<len<<endl;

    // Copy
    strcpy(s5,s4);
    cout<<s5<<endl;

    // +
    char s6[]= "farhan";
    char s7[]= "farhan";
    strcat(s6,s7);
    cout<<s6<<endl;
    cout<<s7<<endl;

    // compare
    int value = strcmp(s6,s7);

    if (value==0)
    {
        cout<< "equal"<<endl;
    }
    else
    {
        cout<< "not equal"<<endl;
    }

cout<< "--------------String-------------\n";
    // 2 string +
    string str1= "farhan";
    string str2= " chowdhury";
    string str3= str1+str2;
    string str4= str1;

    cout<<str3<<endl;
    cout<<str4<<endl;

    // length
    int len1= str4 .size();
    cout<<len1<<endl;







    return 0;
}
