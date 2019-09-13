#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    double A, soma1, soma2;
    cout << fixed << setprecision(2);
    cin >> A;
    if(A > 0 and A <= 400)
    {
        soma1= A * 1.15;
        soma2= soma1 - A;
        cout << "Novo salario: " << soma1 << endl;
        cout << "Reajuste ganho: " << soma2 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    if(A>400 and A <= 800)
    {
        soma1= A * 1.12;
        soma2= soma1 - A;
        cout << "Novo salario: " << soma1 << endl;
        cout << "Reajuste ganho: " << soma2 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    if(A > 800 and A <= 1200)
        {
        soma1= A * 1.10;
        soma2= soma1 - A;
        cout << "Novo salario: " << soma1 << endl;
        cout << "Reajuste ganho: " << soma2 << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    if(A > 1200 and A <= 2000)
        {
        soma1= A * 1.07;
        soma2= soma1 - A;
        cout << "Novo salario: " << soma1 << endl;
        cout << "Reajuste ganho: " << soma2 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    if(A > 2000)
        {
        soma1= A * 1.04;
        soma2= soma1 - A;
        cout << "Novo salario: " << soma1 << endl;
        cout << "Reajuste ganho: " << soma2 << endl;
        cout << "Em percentual: 4 %" << endl;
    }
}