#include<iostream>
#include<math.h>
using namespace std;

int main () {
    float n1,n2;
    char s;
    cout<< "use this sign: +, -, *, /, %, ^ "<<endl;
    cout<<"Type any two number with sign: ";
    cin>>n1>>s>>n2;//6+4//4*5//

    if(s == '+')
        {
        cout<<"ADDITION : " <<n1+n2<<endl;
    }
    else if(s == '-'){
        cout<<"SUBTRACTION : " <<n1-n2<<endl;
    }
    else if(s == '*'){
        cout<<"MULTIPLICATION : " <<n1*n2<<endl;
    }
    else if(s == '/'){
        cout<<"DIVISION : " <<n1/n2<<endl;
    }
    else if(s == '%'){
        cout<<"MOD : " <<(int)n1%(int)n2<<endl;
    }
    else if(s == '^'){
        cout<<"POWER CALCULTION : " <<pow(n1,n2)<<endl;
    }
    else{
        cout<<"Invalid operator"<<endl;
    }

return 0;
}


