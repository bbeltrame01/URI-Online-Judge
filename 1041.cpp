#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double X, Y;

    cin >> X;
    cin >> Y;

    if(X > 0)

    {
        if(Y == 0)

        {
            cout << "Eixo X" << endl;
        }

        if(Y > 0)

        {
            cout << "Q1" << endl;
        }

        if(Y < 0)

        {
            cout << "Q4" << endl;
        }
    }

    if(X < 0)

    {
        if(Y == 0)

        {
            cout << "Eixo X" << endl;
        }
        if(Y > 0)

        {
            cout << "Q2" << endl;
        }

        if(Y < 0)

        {
            cout << "Q3" << endl;
        }
    }

    if(X == 0)

    {
        if(Y == 0)

        {
            cout << "Origem" << endl;
        }

        if (Y != 0)
        {
        cout << "Eixo Y" << endl;
        }
    }
    return 0;
}
