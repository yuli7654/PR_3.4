#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;   // координата x
    double y;   // координата y

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    if ((y >= 0 && y <= x && y >= (x - 2) * (x - 2) - 3) ||
        (y <= 0 && y <= -x && y >= (x - 2) * (x - 2) - 3))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    cin.get();

    return 0;
}