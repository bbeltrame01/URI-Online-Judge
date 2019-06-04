#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int A, B, C, D, soma1, soma2;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    soma1 = C + D;
    soma2 = A + B;

    if((B > C) and (D > A) and (soma1 > soma2) and (C >= 0) and (D >= 0) and (A%2==0))
        cout << "Valores aceitos" << endl; 
    else
        cout << "Valores nao aceitos" << endl;    

    return 0;
}