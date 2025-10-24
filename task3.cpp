using namespace std;

int main() {
    double r, h;
    double pi = 3.1415926535;

    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter height: ";
    cin >> h;

    double area = 2 * pi * r * h + 2 * pi * r * r;
    double volume = pi * r * r * h;

    cout << "Surface Area: " << area << endl;
    cout << "Volume: " << volume;
    return 0;
