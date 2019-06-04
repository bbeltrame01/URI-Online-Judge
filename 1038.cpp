#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int A, B;
    double soma1, soma2, soma3, soma4, soma5;

    cin >> A;
    cin >> B;

    if(A == 1)
    {
        soma1 = B * 4.00;
        cout<<"Total: R$ "<< soma1 << endl;
    }

    if(A == 2)
    {
        soma2 = B * 4.50;
        cout<<"Total: R$ "<< soma2 <<endl;
    }

    if(A == 3)
    {
        soma3 = B * 5.00;
        cout<<"Total: R$ "<< soma3 <<endl;
    }

    if(A == 4)
    {
        soma4 = B * 2.00;
        cout<<"Total: R$ "<< soma4 <<endl;
    }

    if(A == 5)
    {
        soma5 = B * 1.50;
        cout<<"Total: R$ "<< soma5 <<endl;
    }

    return 0;
}

