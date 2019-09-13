#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);

    double A, B, C, perimetro, area;

    cin >> A >> B >> C;

    if(A >= B + C or B >= C + A or C >= A + B)
    {
        area = (C*(A + B))/2;
        cout << "Area = " << area << endl;
    }

    else
    {
        perimetro = A + B + C;
        cout << "Perimetro = " << perimetro << endl;
    }
    return 0;
}
