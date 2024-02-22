#include <iostream>
using namespace std;

    class Student
    {
        private:
            string name;
            int age;
            int id;

        public:
            Student (string s, int a, int i)
            {
                name = s;
                age = a;
                id = i;
            }
            void getvalue()
            {
                cout<< "Name    : "<<name<<endl;
                cout<< "Age     : "<<age<<endl;
                cout<< "id      : "<<id<<endl;
            }
    };

    int main ()
    {
        Student student1 ("Farhan", 12, 42);
        student1.getvalue();




    return 0;
}
