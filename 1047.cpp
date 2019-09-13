#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int To, Mo, Tf, Mf, Tt, tM, X, Y, T;

    cin >> To >> Mo >> Tf >> Mf;

    X= (To*60) + Mo;
    Y= (Tf*60) + Mf;

    if(X < Y)
    {
        Tt= Y - X;

    }
    if (X == Y)
    {
        Tt= 1440;
    }
    if (X > Y)
    {
        Tt= abs(X - 1440) + Y;
    }
    T= Tt / 60;
    tM= Tt % 60;
    cout << "O JOGO DUROU " << T << " HORA(S) E " << tM << " MINUTO(S)" << endl;
    return 0;
}
