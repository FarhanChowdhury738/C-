#include <iostream>
using namespace std;

void i (double &r1, double &r2) {
    cout << "Enter result 1: ";
    cin >> r1;

    cout << "Enter result 2: ";
    cin >> r2;
}

double c (double r1, double r2) {

    double avg = (r1+r2)/2;
    return avg;
}

int main() {
    double r1, r2;

    i (r1, r2);

    double average = c (r1, r2);
    cout << "Average result: " << average << endl;

    return 0;
}

