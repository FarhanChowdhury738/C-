#include <iostream>
#include <math.h>
using namespace std;

int main (){

    /*cout<<"hello: "<<pow(23,2)<<endl;
    cout<<"root 25: "<<pow(25,1/2)<<endl;
    cout<<"squre root: "<<sqrt(25)<<endl;*/

    /*int  x=3, y=24;

    x+=2;
    cout<<x<<endl;

    x-=2;
    cout<<x<<endl;

    x*=2;
    cout<<x<<endl;

    x%=2;
    cout<<x<<endl; */


    //Unary Operator
    /*int x=6;
    int result= -x;
    cout<<result<<endl; */

    /*increment operator
    ++x;    increment x by one - before it is used
    x++;    increment x by one - after it is used

    decrement  operator
    --x;    decrement x by one - before it is used
    x--;    decrement x by one - after it is used */


   int basa_rent;
   cout<<"basa rent: ";
   cin>>basa_rent;

   int pani;
   cout<<"pani: ";
   cin>>pani;

   int current;
   cout<<"current: ";
   cin>>current;


   int khala;
   cout<<"khala: ";
   cin>>khala;

   int cleanner;
   cout<<"cleanner: ";
   cin>>cleanner;

   int gas;
   cout<<"gas: ";
   cin>>gas;

   int meal;
   cout<<"meal: ";
   cin>>meal;

   int mass= meal+gas+cleanner+khala+current+pani+basa_rent;
   cout<<"Total mass vara: "<<mass<<endl;

   int nayem;
   cout<<"nayem: ";
   cin>>nayem;

   int tour;
   cout<<"tour: ";
   cin>>tour;

   int sum= mass+nayem+tour;
   cout<<"total cash out: "<<sum<<endl;

   int add;
   cout<<"add more money for this month: ";
   cin>>add;
   int total_sum= sum+add;
   cout<<" now total cash out: "<<total_sum<<endl;







return 0;
}
