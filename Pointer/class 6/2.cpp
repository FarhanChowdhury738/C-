#include <iostream>
using namespace std;

void s (double m[], int a)
{
    for (int i = 0; i < a; ++i)
        {
        cout << "Enter subject mark: " << i+1 << ": ";
        cin >> m[i];
    }
}

double h ( double m[], int a) {
    double h = m[0];
    for (int i = 1; i < a; ++i) {
        if (m[i] > h) {
            h = m[i];
        }
    }
    return h;
}

int main() {
    int num;

    cout << "How many number of assignments: ";
    cin >> num;

    double student[100];

    s(student, num);

    double hM = h(student, num);
    cout << "Highest number: " << hM << endl;

    return 0;
}

