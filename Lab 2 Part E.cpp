#include <iostream>
using namespace std;

int main() {
    double x;
    double y;

    cout << "Enter X Y Pair:" << endl;
    cin >> x;
    cin >> y;

    if (x > 0) {
        if (y > 0)
            cout << "Pair is quadrant Q1" << endl;
        else if (y < 0)
            cout << "Pair is quadrant Q4" << endl;
        else if (y == 0)
            cout << "On X-Axis" << endl;
    }
    else if (x < 0) {
        if (y > 0)
            cout << "Pair is quadrant Q2" << endl;
        else if (y < 0)
            cout << "Pair is quadrant Q3" << endl;
        else if (y == 0)
            cout << "On X-Axis" << endl;
    }
    else if (x ==0) {
        if (y == 0)
            cout << "Center Point" << endl;
        else
            cout << "On Y-Axis" << endl;
    }
}
