#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of courses: ";
    cin >> n;

    float marks[n];
    float totalGrade = 0.0;
    int credit = 3;

    for (int i = 0; i < n; ++i) {
        cout << "Enter marks " << i + 1 << ": ";
        cin >> marks[i];
        if (marks[i] >= 90)
            totalGrade += 4 * credit;
        else if (marks[i] >= 85)
            totalGrade += 3.75 * credit;
        else if (marks[i] >= 80)
            totalGrade += 3.5 * credit;
        else if (marks[i] >= 75)
            totalGrade += 3.25 * credit;
        else if (marks[i] >= 70)
            totalGrade += 3.0 * credit;
        else if (marks[i] >= 65)
            totalGrade += 2.75 * credit;
        else if (marks[i] >= 60)
            totalGrade += 2.5 * credit;
        else if (marks[i] >= 50)
            totalGrade += 2.25 * credit;
    }

    float totalCredits = n * credit;
    float cgpa = totalGrade / totalCredits;

    cout << "Total CGPA: " << cgpa << endl;

    return 0;
}
