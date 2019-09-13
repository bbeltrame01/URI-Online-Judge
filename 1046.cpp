#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int To, Tf, Tt;

    cin >> To >> Tf;

    if(To < Tf)
    {
        Tt= abs(To - Tf);
        cout << "O JOGO DUROU " << Tt << " HORA(S)" << endl;
    }
    else
    {
        Tt= 24 - To + Tf;
        cout << "O JOGO DUROU " << Tt << " HORA(S)" << endl;
    }
    return 0;
}
