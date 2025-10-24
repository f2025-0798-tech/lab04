#include <iostream>
using namespace std;

int main() {
    int current, birth;
    cout << "Enter current year: ";
    cin >> current;
    cout << "Enter year of birth: ";
    cin >> birth;

    int age = current - birth;
    cout << "Age: " << age << endl;

    if (age >= 18 && age <= 28)
        cout << "Applicant is eligible.";
    else
        cout << "Applicant is not eligible.";
    return 0;
