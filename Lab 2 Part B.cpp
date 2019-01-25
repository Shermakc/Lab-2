#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double FT;
    double t;
    double hours;
    double minutes;

    cout << "Enter Hours: ";
    cin >> hours;
    cout << "Enter Minutes: ";
    cin >> minutes;

    t = hours + (minutes / 60);
    FT = (4 * pow(t,2)) / (t + 2) - 20;
    cout << "Approximate Temperature: " << FT << endl;
}
