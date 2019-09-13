#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int To, Mo, Tf, Mf, Tt, So, X, Y, T, Sf, Do, Df, S, D, tM;
    string A;
    char p;

    cin >> A >> Do;
    cin >> To >> p >> Mo >> p >> So;
    cin >> A >> Df;
    cin >> Tf >> p >> Mf >> p >> Sf;

    X= Do*86400 + (To*3600) + Mo*60 + So;
    Y= Df*86400 + (Tf*3600) + Mf*60 + Sf;


    Tt= Y - X;


    D= Tt / 86400;
    Tt= Tt % 86400;
    T= Tt / 3600;
    Tt= Tt % 3600;
    tM= Tt / 60;
    Tt= Tt % 60;
    S = Tt;


    cout << D << " dia(s)" << endl;
    cout << T << " hora(s)" << endl;
    cout << tM << " minuto(s)" << endl;
    cout << S << " segundo(s)" << endl;

    return 0;
}
