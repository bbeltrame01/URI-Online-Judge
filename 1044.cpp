#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int A, B, soma;

    cin >> A;
    cin >> B;
    if(A > B)
    {
        soma= A%B;
        if(soma == 0)
        {
            cout << "Sao Multiplos" << endl;
        }
        else
        {
            cout << "Nao sao Multiplos" << endl;
        }
    }
    else
    {
        soma= B%A;
        if(soma == 0)
        {
            cout << "Sao Multiplos" << endl;
        }
        else
        {
            cout << "Nao sao Multiplos" << endl;
        }
    }
        return 0;
    }