#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(5);

    double A, B, C, X, R1, R2;

    cin >> A >> B >> C;

    X = pow(B,2) - 4 * A * C;

    if (A == 0 or X < 0)
        cout << "Impossivel calcular" << endl;
    else
    {
        R1 = (-B + sqrt(X))/(2*A);
        R2 = (-B - sqrt(X))/(2*A);
        cout <<"R1 = " << R1 << endl;
        cout <<"R2 = " << R2 << endl;
    }

    return 0;
}
