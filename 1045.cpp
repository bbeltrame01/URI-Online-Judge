#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C, X, Va, Vb, Vc;

    cin >> A;
    cin >> B;
    cin >> C;

    if(A < B)
    {
        X= A;
        A= B;
        B= X;
    }
    if(A < C)
    {
        X= A;
        A= C;
        C= X;
    }
    if(B < C)
    {
        X= B;
        B= C;
        C= X;
    }

    Va = pow(A, 2);
    Vb = pow(B, 2);
    Vc = pow(C, 2);

    if(A >= B + C)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }

    else
    {
        if(Va == Vb + Vc)
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if(Va > Vb + Vc)
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if(Va < Vb + Vc)
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B and A == C and B == C)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if(A == B and A!= C or B == C and B != A)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}