#include <iostream>
using namespace std;

int main ()
{ system("color 0a");


    int n;
    while (n !=111)
    {
        cout<<endl<<endl;
    cout<< "1. swap 2 number"<<endl;
    cout<< "2. Multiplication Table\n";
    cout<< "3. find Factorial\n";
    cout<< "4. check number prime or not\n";
    cout<< "5. find Vowel or Consonant\n";
    cout<< "6. find leap year\n";
    cout<< "7. print sum\n";
    cout<< "8. find palindrome or not\n";
    cout<< "9. print the elements of the array in revers oder\n";
    cout<< "10. all negative elements in an array\n";
    cout<< "11. all array elements sum: \n";
    cout<< "12. sort an array in ascending order\n";
    cout<< "13. find even or odd\n";
    cout<< "14. print the prime number between to range number\n";
    cout<< "15. find HCF and LCM of two numbers\n";



    cout<< "111. Exit"<<endl<<endl;
    cout<< "type number: ";
    cin>>n;

    switch (n)
    {
    case 0:
        {
            break;
        }
    case 1:
        {
            int a=5, b=10;
            cout<<a<< " "<<b<<endl;
            int c=a;
            a=b;
            b=c;
            cout<<a<< " "<<b<<endl;
            break;
        }
    case 2:
        {
            int n;
            cout<< "num: ";
            cin>>n;

            for (int i=1; i<=10; i++){
                cout<<i<<"X"<<n<< "= "<<i*n<<endl;
            }

            break;
        }
    case 3:
        {
            int nn, factorial=1;
            cout<<"num: ";
            cin>>nn;
            for(int i = 1; i <= nn; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << nn << " = " << factorial;

            break;
        }
    case 4:
        {
          int n;
          int num=1;
          cout << "Enter a positive integer: ";
          cin >> n;

          // loop to check if n is prime
          for (int i = 2; i <= n/2; ++i) {
            if (n % i == 0) {
              num=0;
              break;
            }
          }

          if (num)
            cout << n << " is a prime number";
          else
            cout << n << " is not a prime number";
            break;
        }
    case 5:
        {
           char ch;
           cout<< "enter any letter: ";
           cin>>ch;
           ch= tolower(ch);

           if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<< "Vowel";
           } else{
            cout<< "Consonant";
           }

            break;
        }
    case 6:
        {
            int year;
          cout << "Enter a year: ";
          cin >> year;

          if (year % 400 == 0 || year % 100 == 0 || year % 4 == 0) {
            cout << year << " is a leap year.";
          }
          else {
            cout << year << " is not a leap year.";
          }
            break;
        }
    case 7:
        {
            int n, sum=0;
            cout<< "how many number, do you want sum: ";
            cin>>n;
            int num[n];
            for (int i=1; i<=n; i++){
                cout<< "num "<<i<< ": ";
                cin>>num[i];
                sum+=num[i];
            }
            cout<< n<< "number of sum: "<<sum<<endl;

            break;
        }
    case 8:
        {
            int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);


     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
         break;

        }
    case 9:
        {
            int n[4];
            for(int i=0; i<5; i++){
                cout<< "num "<<i+1<< ": ";
                cin>>n[i];
            }
            cout<< "\narray reverse order\n";
            for(int i=(5-1); i>=0; i--){
                cout<< "num "<<i+1<< ": "<<n[i]<<endl;

            }
            cout<< "--------END------\n";
            break;
        }
    case 10:
        {
            int n[4];
            for(int i=0; i<5; i++){
                cout<< "num "<<i+1<< ": ";
                cin>>n[i];
            }
            cout<<"negative array elements: ";
            for(int i=0; i<5; i++){
                for (int j=0; j<5; j++){
                    if (n[i]<0)
                    {
                        cout<<n[i]<< " ";
                        break;
                    }
                }
            }

            break;
        }
    case 11:
        {
            int n[4], sum=0;
            for(int i=0; i<5; i++){
                cout<< "num "<<i+1<< ": ";
                cin>>n[i];
                sum+=n[i];
            }
            cout<< "all elements array sum: "<<sum;
            break;
        }
    case 12:
        {
            int n=3;
            int a[n];

        cout<<"\nEnter the elements: ";
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++) { if(a[i]>a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        cout<<"\nArray after swapping: ";
        for(int i=0; i<n; i++)
          cout<<a[i]<<" ";
            break;

        }
    case 13:
        {
            int n;
        cout<< "NUM: ";
        cin>>n;

        if (n%2 ==0){
            if (n>0){
                cout<< "Positive even number";
            } else if(n<0){
                cout<< "Negative even number";
            }
        } else if (n%2 !=0){
            if (n>0){
                cout<< "Positive odd number";
            } else if (n<0){
                cout<< "Negative odd number";
            }
        }
            break;
        }
    case 14:
        {
            int low, high, i;
          bool is_prime = true;

          cout << "Enter two numbers (intervals): ";
          cin >> low >> high;

          cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

          while (low < high) {
            is_prime = true;

            // 0 and 1 are not prime numbers
            if (low == 0 || low == 1) {
              is_prime = false;
            }

            for (i = 2; i <= low/2; ++i) {
              if (low % i == 0) {
                is_prime = false;
                break;
              }
            }

            if (is_prime)
              cout << low << ", ";

            ++low;
          }
          break;
        }
    case 15:
        {
            int a, b, x, y, temp, hcf, lcm;
        cout<<"\n Enter Two Numbers : \n";
        cin>>x>>y;

        a=x;
        b=y;

        while(b!=0)
        {
                temp=b;
                b=a%b;
                a=temp;
        }
        hcf=a;
        lcm=(x*y)/hcf;
        cout<<"\n HCF : "<<hcf<<"\n";
        cout<<"\n LCM : "<<lcm<<"\n";
            break;
        }
    default:
        cout<< "error\n";







    }//switch---END---
    }









    return 0;
}
