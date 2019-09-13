#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int A, B, C, X, Y, Z;

    cin >> A;
    cin >> B;
    cin >> C;

    if (A < B)

    {
        if(A < C)

        {
            if(B < C)

            {
                cout << A << endl;
                cout << B << endl;
                cout << C << endl;
            }

            else
            {
                cout << A << endl;
                cout << C << endl;
                cout << B << endl;
            }
        }

        else
        {
            {
                cout << C << endl;
                cout << A << endl;
                cout << B << endl;
            }
        }
    }

    if(B < A and B < C)
    {
        if(A < C)

        {
            cout << B << endl;
            cout << A << endl;
            cout << C << endl;
        }

        else
        {
            cout << B << endl;
            cout << C << endl;
            cout << A << endl;
        }
    }

    if(C < A and B > C and B < A)

    {
        cout << C << endl;
        cout << B << endl;
        cout << A << endl;
    }
    X= A;
    Y= B;
    Z= C;
    cout << endl;
    cout << X << endl;
    cout << Y << endl;
    cout << Z << endl;
    return 0;
}
