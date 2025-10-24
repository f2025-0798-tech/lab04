#include <iostream>
using namespace std;

int main() {
    double lenght1, width1, lenght2, width2;

    cout << "Enter length of first rectangle: ";
    cin >> lenght1;
    cout << "Enter width of first rectangle: ";
    cin >> width1;

    cout << "Enter length of second rectangle: ";
    cin >> lenght2;
    cout << "Enter width of second rectangle: ";
    cin >> width2;

    double area1 = lenght1 * width1;
    double area2 = lenght2 * width2;

    cout << "Area of Rectangle 1: " << area1 << endl;
    cout << "Area of Rectangle 2: " << area2 << endl;

    if (area1 == area2)
        cout << "Both rectangles have equal areas.";
    else
        cout << "The rectangles have different areas.";
    return 0;

