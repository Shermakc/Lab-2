#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    double b;
    double c;
    double d;
    double x;
    double z;
    double y;

    cout << "Enter four numbers: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    x = (a + b + c)  / (2 * a * c);
    z = ((a * a) / b) + (c / d) * (a + b);
    y = pow(a,2 + b + c) + a - c + 4;

    cout << "Formula 1: " << x << endl;
    cout << "Formula 2: " << z << endl;
    cout << "Formula 3: " << y << endl;
}
