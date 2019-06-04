#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    cout<< fixed <<setprecision(2);
    int A, B;
    double C;
    int D, E;
    double F;
    double SOMA;
    cin>> A >> B >> C >> D >> E >> F;
    SOMA= (B*C)+(E*F);
    cout<< "VALOR A PAGAR: R$ "<<SOMA<<endl;
    return 0;
}